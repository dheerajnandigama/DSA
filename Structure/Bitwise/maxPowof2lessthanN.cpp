#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=8;
    int temp;
    while(x>0){ // or x != 0
        temp = x;
        x = (x & (x-1));
    }
    cout<<temp<<endl;
    return 0;
}