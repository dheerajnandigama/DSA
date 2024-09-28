#include <bits/stdc++.h>
#include <thread>
#include <mutex>
using namespace std;

mutex carMutex;

void driveCar(string name)
{
    unique_lock<mutex> carLock(carMutex);
    // lock_guard

    //  This three lines are critical section

    cout << name << " is driving" << endl;
    this_thread::sleep_for(chrono::seconds(2)); // Sleep for 2 seconds
    cout << name << " is done driving" << endl;
    carLock.unlock();
}

int main()
{
    // Pass string arguments to the threads using std::string
    thread t1(driveCar, string("alice"));
    thread t2(driveCar, string("bob"));

    // Wait for both threads to finish
    t1.join();
    t2.join();

    cin.get();

    return 0;
}
