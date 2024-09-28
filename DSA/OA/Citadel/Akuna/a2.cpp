#include <array>
#include <vector>
#include <string>
#include <cmath>
#include <limits>

struct Point
{
    int x;
    int y;
};

// Function to calculate Cartesian distance between two points
double distance(Point a, Point b) noexcept
{
    return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

std::string spellWithPingPongBalls(const std::array<Point, 26> &board, const std::vector<Point> &hits)
{
    std::string score;

    for (const auto &hit : hits)
    {
        double min_distance = std::numeric_limits<double>::max();
        int closest_index = -1;
        bool is_ambiguous = false;

        for (int i = 0; i < board.size(); ++i)
        {
            double dist = distance(hit, board[i]);
            if (dist < min_distance)
            {
                min_distance = dist;
                closest_index = i;
                is_ambiguous = false;
            }
            else if (dist == min_distance)
            {
                is_ambiguous = true;
            }
        }

        if (is_ambiguous)
        {
            score += '*';
        }
        else
        {
            score += 'A' + closest_index; // 'A' + index gives the letter corresponding to the index
        }
    }

    return score;
}
