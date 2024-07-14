#include <bits/stdc++.h>
using namespace std;

void generateSubsets(std::vector<int> &arr)
{
    int n = arr.size();
    int subsetCount = pow(2, n); // 2^n subsets

    for (int i = 0; i < subsetCount; i++)
    {
        std::cout << "{ ";
        for (int j = 0; j < n; j++)
        {
            // Check if the jth bit in the i is set
            if (i & (1 << j))
            {
                std::cout << arr[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}

int main()
{
    std::vector<int> arr = {1, 2, 3};
    std::cout << "All subsets of the array are:" << std::endl;
    generateSubsets(arr);
    return 0;
}
