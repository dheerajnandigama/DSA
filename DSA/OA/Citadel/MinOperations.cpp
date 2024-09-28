#include <bits/stdc++.h>
using namespace std;

int getMinimumOperations(vector<int> executionTime, int x, int y)
{
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < executionTime.size(); ++i)
    {
        pq.push({executionTime[i], i});
    }

    int operations = 0;

    while (!pq.empty())
    {
        operations++;
        pair<int, int> majorJob = pq.top();
        pq.pop();

        vector<pair<int, int>> remainingJobs;

        while (!pq.empty())
        {
            pair<int, int> job = pq.top();
            pq.pop();
            job.first -= y;
            if (job.first > 0)
            {
                remainingJobs.push_back(job);
            }
        }

        majorJob.first -= x;
        if (majorJob.first > 0)
        {
            remainingJobs.push_back(majorJob);
        }

        for (auto job : remainingJobs)
        {
            pq.push(job);
        }
    }

    return operations;
}

int main()
{
    vector<int> executionTime = {3, 4, 1, 7, 6};
    int x = 4;
    int y = 2;
    cout << getMinimumOperations(executionTime, x, y) << endl;

    return 0;
}
