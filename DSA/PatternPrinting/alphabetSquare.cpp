#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }

    return 0;
}