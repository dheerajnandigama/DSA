#include <bits/stdc++.h>
using namespace std;

//Factors of number n in O(N)

void finding_factor_of_number(int n) {
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cout << i << " is a factor" << endl;
    }
  }
}

//Factors of number n in O(sqrt(N))

void find_factors(int number) {
  for (int factor = 1; factor * factor <= number; factor++) {
    if (number % factor == 0) {
      cout << factor << endl;
      
      if (number / factor != factor) {
        cout << number / factor << endl;
      }
    }
  }
}

//Is prime or not in O(sqrt(N))

bool is_prime(int number) {
  for (int factor = 2; factor * factor <= number; factor++) {
    if (number % factor == 0) {
     return false;
    }
  }
  return true;
}

//All prime divisors in O(sqrt(N))

void allprimefactor(int num)
{
  for(int primefac=2;primefac*primefac<=num;primefac++)
  {
        while(num%primefac==0)
        {
              cout << primefac << endl;
              num/=primefac;
        }
  }
  if(num>1)
  cout << num<< endl;
}



int main() {

    // finding_factor_of_number(15);
    // find_factors(15);
   //cout<< is_prime(7);
   //allprimefactor(15);


    return 0;
}
