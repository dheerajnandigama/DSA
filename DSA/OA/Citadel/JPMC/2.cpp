// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

struct TupleHash
{
    template <class T1, class T2, class T3>
    std::size_t operator()(const std::tuple<T1, T2, T3> &t) const
    {
        auto h1 = std::hash<T1>{}(std::get<0>(t));
        auto h2 = std::hash<T2>{}(std::get<1>(t));
        auto h3 = std::hash<T3>{}(std::get<2>(t));
        return h1 ^ h2 ^ h3;
    }
};

int count_duplicates(const std::vector<std::string> &names,
                     const std::vector<int> &prices,
                     const std::vector<int> &weights)
{
    std::unordered_set<std::tuple<std::string, int, int>, TupleHash> unique_products;
    int duplicates = 0;

    for (size_t i = 0; i < names.size(); ++i)
    {
        auto product = std::make_tuple(names[i], prices[i], weights[i]);
        if (unique_products.find(product) != unique_products.end())
        {
            ++duplicates;
        }
        else
        {
            unique_products.insert(product);
        }
    }

    return duplicates;
}

int main()
{
    std::vector<std::string> names = {"ball", "box", "ball", "ball", "box"};
    std::vector<int> prices = {2, 2, 2, 2, 2};
    std::vector<int> weights = {1, 2, 1, 1, 3};

    int result = count_duplicates(names, prices, weights);
    std::cout << "Number of duplicate products: " << result << std::endl;

    return 0;
}