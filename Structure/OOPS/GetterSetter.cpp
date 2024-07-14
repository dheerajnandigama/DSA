#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
        string name;
        int age;
        float salary;
    
    public:
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        void setSalary(float s){
            salary = s;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        float getSalary(){
            return salary;
        }
};

int main (){

Employee emp1,emp2;

emp1.setName("Dheeraj");
emp1.setAge(24);
emp1.setSalary(200000);

cout<<emp1.getName()<<" is " << emp1.getAge() << " years old and earn $ " << emp1.getSalary();

return 0;
}
