//Multi Level Inheritance--> where multiple levels inherit properties:

#include<iostream>
#include<string>
using namespace std;

// create Class A(Person)-->Parent class of Class B(student)
class Person{
    //name, age
    public:
       string name;
       int age;
    
    // parametrised constructor:
    Person(string name, int age){
        this->name=name;
        this->age=age;
    } 
};

// create Class B(Student)-->Parent class of Class C(graduteStudent):
class Student:public Person{
    //name, age, rollno-->inherit name & age from the "class Person":
    public:
       float rollno;
    
    //Parameterised constructor:
    Student(string name, int age, float rollno): Person(name, age){
       this->rollno=rollno;
    }   
};

// create Class C(graduteStudent)-->child class:
class graduateStudent:Student{
    //name, age, rollno, researchArea:--->inherit name, age, rollno fro  class Student:
    public:
      string researchArea;
    
    // Parametrised constructor:
    graduateStudent(string name, int age, float rollno, string researchArea):Student(name,age,rollno){
        this->researchArea=researchArea;
    }

    //method
    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"ResearchArea:"<<researchArea<<endl;
    }
};

int main(){
    graduateStudent GS1("vaishali",21, 123, "Cpp");
    GS1.getinfo();

    return 0;
}


