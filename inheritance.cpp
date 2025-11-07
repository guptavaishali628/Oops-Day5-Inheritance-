// inheritance-->when the member functions or properties are passed to the drived class known as inheritance:
// constructor's calling sequence --> first it call the parent constructor then child constructor:
// destructor's calling sequence --> first it call the child constructor then parent constructor:

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

       //----constructor without parameters(by default call by system)-----:
    //    Person(){
    //     cout<<"parent constructor..\n";
    //    }
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

    //-----non-parameterised constructor--------->
    // Student(){
    //     cout<<"child constructor..\n";
    // }

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
    //----------call this with non-parametrised constructor------------
    // S1.name="vaishali";
    // S1.age=21;
    // S1.rollno=123;
    // S1.getinfo();

    return 0;
}

