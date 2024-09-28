#include <bits/stdc++.h>
using namespace std;

void refresh(map<string, int> &fcm)
{
    while (true)
    {
        for (auto &item : fcm)
        {
            item.second++;
            cout << item.first << " - " << item.second << endl;
        }
        this_thread::sleep_for(2000ms);
    }
}

int main()
{
    map<string, int> fcm = {
        {"Newyork", 15},
        {"California", 18},
        {"Boston", 23},
        {"Chicago", 7}};

    thread bgWorker(refresh, std::ref(fcm));

    cin.get();

    bgWorker.join();

    return 0;
}
