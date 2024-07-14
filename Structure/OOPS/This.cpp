#include <bits/stdc++.h>
using namespace std;

class Car{
   private:
    string make;
    string model;
    int year;

  public:
    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    void printInfo() {
        cout << "Make: " << this->make << endl;
        cout << "Model: " << this->model << endl;
        cout << "Year: " << this->year << endl;
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2020);
    myCar.printInfo();
    return 0;
}

