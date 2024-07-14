#include <bits/stdc++.h>
using namespace std;

int countSetBits(int num){
    return __builtin_popcount(num);
}

int countSetBits_2(int num){
    int count = 0;
    while(num>0){
        num = (num & (num-1));
        count++;
    }
    return count;
}

int main(){

    int n = 24;
    cout<<countSetBits(n)<<endl;
    cout<<countSetBits_2(n)<<endl;
}