#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int N) {
    return (N & (N - 1)) == 0;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (isPowerOfTwo(number)) {
        std::cout << number << " is a power of 2." << std::endl;
    } else {
        std::cout << number << " is not a power of 2." << std::endl;
    }

    return 0;
}