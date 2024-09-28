#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers;
    vector<int>::iterator it;

    // Enter your code here
    int n;
    cin>>n;
    int x;
    while(n--){
        cin>>x;
        numbers.push_back(x);
    }

    for(it = numbers.begin(); it != numbers.end(); it++ )
    {
        *it +=1;
    }

    for(it = numbers.begin(); it != numbers.end(); it++ )
    {
        cout << *it << " ";
    }

    return 0;
}