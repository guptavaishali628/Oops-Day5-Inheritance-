// Single inheritance--> where peroperties are inherit from one parent to one child:

#include<iostream>
#include<string>
using namespace std;
 // creation of class A(person)--> parent class

class Person{
    //name, age
    public:
       string name;
       int age;

       //------constructor with parameters(we have to call it with the child constructor)----:
       Person(string name, int age){
        this->name=name;
        this->age=age;
       }
};

// creation of Class B(Student)-->child class which inherit properties from the parent class:

class Student:public Person{
    //name, age , rollno
public:
    float rollno;

    //-------parameterised constructor with parent constructor----:
    Student(string name, int age, float rollno):Person( name, age){
        this->rollno=rollno;
    }

    //-----Method------
    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }
};

int main(){
    //object creation:
    Student s1("Vaishali",21,123);
    s1.getinfo();

    return 0;
}

