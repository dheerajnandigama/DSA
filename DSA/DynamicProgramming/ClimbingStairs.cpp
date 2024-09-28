#include<bits/stdc++.h>
using namespace std;

int climbingStairs(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    int one = climbingStairs(n-1);
    int two = climbingStairs(n-2);
    return one + two;
}

int main() {
    int n=4;
    cout<<climbingStairs(n);
    return 0;
}
