#include <vector>
#include <map>
#include <utility>
#include <algorithm>

struct Order
{
    int timestamp;
    int eventId;
    bool buy;
    int quantity;
};

struct PriceUpdate
{
    int timestamp;
    int eventId;
    int delta;
};

auto ticketsMargin(int initialPrice, const std::vector<Order> &orders, const std::vector<PriceUpdate> &feed)
{
    std::map<int, int> currentPrice;    // Stores the current price for each event
    std::map<int, int> totalProfitLoss; // Stores the total profit/loss for each event
    std::map<int, int> lastPrice;       // Tracks the last processed price for each event

    // Initialize the prices for all events based on initial price
    for (const auto &order : orders)
    {
        currentPrice[order.eventId] = initialPrice;
    }
    // Process price updates
    std::map<int, std::vector<std::pair<int, int>>> priceUpdates;
    for (const auto &update : feed)
    {
        priceUpdates[update.eventId].emplace_back(update.timestamp, update.delta);
    }
    // Calculate final prices at each timestamp in orders
    for (const auto &order : orders)
    {
        int eventId = order.eventId;
        int price = currentPrice[eventId];
        for (const auto &update : priceUpdates[eventId])
        {
            if (update.first <= order.timestamp)
            {
                price += update.second;
                if (price < 1)
                    price = 1; // Enforce minimum price
            }
        }
        if (order.buy)
        {
            totalProfitLoss[eventId] -= price * order.quantity;
        }
        else
        {
            totalProfitLoss[eventId] += price * order.quantity;
        }
    }
    // Prepare result
    std::vector<std::pair<int, int>> result;
    for (const auto &entry : totalProfitLoss)
    {
        if (entry.second != 0)
        { // Exclude events with no profit or loss
            result.emplace_back(entry.first, entry.second);
        }
    }
    return result;
}
