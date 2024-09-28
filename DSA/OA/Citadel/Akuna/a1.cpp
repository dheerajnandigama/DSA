#include <vector>
#include <algorithm>
#include <unordered_map>

int longestMarathon(const std::vector<int> &runtimes)
{
    if (runtimes.empty())
        return 0;

    std::vector<int> sorted_runtimes = runtimes;
    std::sort(sorted_runtimes.begin(), sorted_runtimes.end());

    int max_length = 1;
    int prev_runtime = sorted_runtimes[0];
    int current_length = 1;

    for (int i = 1; i < sorted_runtimes.size(); i++)
    {
        if (sorted_runtimes[i] == prev_runtime || sorted_runtimes[i] == prev_runtime + 1)
        {
            current_length++;
            prev_runtime = sorted_runtimes[i];
        }
        else
        {
            max_length = std::max(max_length, current_length);
            current_length = 1;
            prev_runtime = sorted_runtimes[i];
        }
    }

    max_length = std::max(max_length, current_length);
    return max_length;
}