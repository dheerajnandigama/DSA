#include <iostream>
#include <type_traits>

// Template function that only works with integral types
template <typename T>
typename std::enable_if<std::is_integral<T>::value, T>::type
add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << add(3, 4) << std::endl; // Works fine
    // std::cout << add(3.5, 4.2) << std::endl;  // Compilation error
    return 0;
}
