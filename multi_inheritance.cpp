// Multi Inheritance--> when a child inherit properties from two parent class nknown as multi inheritance:

#include<iostream>
#include<string>
using namespace std;
//create class A(Student)---> parent class for class C(TA-teaching assistant)
class Student{
    public:
       //name, rollno:
       string name;
       float rollno;
};

//create class B(Teacher)---> parent class for class C(TA-teaching assistant)
class Teacher{
    public:
       //Subject, Salary:
       string subject;
       float salary;
};

//create class C(TA)---> child class for class Teacher & Student
class TA:public Student, public Teacher{
    //-----method-------
public:
    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"subject:"<<subject<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main(){
    // object creation:
    TA TA1;
    TA1.name="Vaishali";
    TA1.rollno=21;
    TA1.subject="AI";
    TA1.salary=12000;

    TA1.getinfo();

    return 0;

}
