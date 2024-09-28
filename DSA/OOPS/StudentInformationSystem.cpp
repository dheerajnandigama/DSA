#include <bits/stdc++.h>
using namespace std;

class Student{
      private:
        string name;
        int id;
        double gpa;

      public:
        void setName(string n){
          name = n;
        }  
        void setId(int i){
          id = i;
        }
        void setGpa(double g){
          gpa = g;
        }
        string getName(){
          return name;
        }
        int getId(){
          return id;
        }
        double getGpa(){
          return gpa;
        }

};
int main(){

cout<<"Welcome to the student information system"<<endl;

string studentName;
int studentId;
double studentGpa;

cout<<"Enter student name: ";
cin>> studentName;

cout<<"Enter student ID: ";
cin>> studentId;

do{
cout<<"Enter student GPA: ";
cin>> studentGpa;

if(studentGpa < 0 || studentGpa > 4){
  cout<<"Invalid Input, Please enter a CGPA between 0 to 4";
}

}while(studentGpa < 0 || studentGpa > 4);

Student s;
s.setName(studentName);
s.setId(studentId);
s.setGpa(studentGpa);

cout<<"Student Information:"<<endl;
cout<<"Name: "<<s.getName()<<endl;
cout<<"ID: "<<s.getId()<<endl;
cout<<"GPA: "<<s.getGpa()<<endl;


  return 0;
}
