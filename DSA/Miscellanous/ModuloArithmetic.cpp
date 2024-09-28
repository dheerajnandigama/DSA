#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long factorialModM(int n) {
    long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial = (factorial * i) % MOD;
    }
    return factorial%MOD;
}

int main(){
    cout<< factorialModM(40);
    return 0;
}