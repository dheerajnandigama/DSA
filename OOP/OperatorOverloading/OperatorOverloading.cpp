#include <bits/stdc++.h>
using namespace std;

struct YoutubeChannel
{
    string Name;
    int SubscribersCount;

    YoutubeChannel(string name, int subscriberscount)
    {
        Name = name;
        SubscribersCount = subscriberscount;
    }
};

struct MyCollection
{
    list<YoutubeChannel> myChannels;

    void operator+=(YoutubeChannel &channel)
    {
        this->myChannels.push_back(channel);
    }
};

ostream &operator<<(ostream &COUT, YoutubeChannel &ytchannel)
{
    COUT << "Name: " << ytchannel.Name << endl;
    COUT << "Subscribers: " << ytchannel.SubscribersCount << endl;
    return COUT;
}

ostream &operator<<(ostream &COUT, MyCollection &mycollection)
{
    for (YoutubeChannel &yt : mycollection.myChannels)
    {
        COUT << yt;
    }
    return COUT;
}

int main()
{
    YoutubeChannel y1 = YoutubeChannel("channel1", 75000);
    YoutubeChannel y2 = YoutubeChannel("channel2", 80000);

    // cout<<y1;

    MyCollection myCollection;
    myCollection += y1;
    myCollection += y2;

    cout << myCollection;

    return 0;
}
