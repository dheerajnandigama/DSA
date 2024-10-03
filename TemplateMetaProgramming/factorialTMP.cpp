#include <iostream>

// Base case: Factorial of 0 is 1
template <int N>
struct Factorial
{
    static const int value = N * Factorial<N - 1>::value;
};

// Specialization for factorial of 0
template <>
struct Factorial<0>
{
    static const int value = 1;
};

int main()
{
    std::cout << "Factorial of 5 is: " << Factorial<5>::value << std::endl;
    return 0;
}
