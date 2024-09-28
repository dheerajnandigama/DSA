#include <bits/stdc++.h>
using namespace std;

// the key word new , asks the os for a dynamic memory of size 20 and after using it , if we do not delete then it is memory leak
// in this case it is 20 , but what if the array size is 5000 and have user details and run in a loop for 1000 times
// a lot of dynamic memory is wasted , so we delete the dynamic memory after using such that we use it for other purpose
// dynamic memory allocation happens through heap
// If we do not delete the used space , we cannot access the pointer ptr after the scope of function and we cant delete forever
// we cant access ptr in line 22 after myFunc();

void myFunc()
{
    int *ptr = new int[20];
    ptr[2] = 10;
    cout << "Hi , I am = " << ptr[2] << endl;
}

int main()
{

    myFunc();

    return 0;
}