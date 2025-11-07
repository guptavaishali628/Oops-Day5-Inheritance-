// Hybrid Inheritance--> This type of inheritance is the mixture of all type of inheritance :
// as per their requirement classes inherit properties from the parent classes:
// virtual public inheritance---> Virtual public inheritance in C++ is a mechanism that solves the diamond
// problem in multiple inheritance by ensuring only one shared copy of a common base class is inherited,
// even if it appears multiple times along different inheritance paths.

#include<iostream>
#include<string>
using namespace std;

//------create class A(Person):parent class for class B(student) & class C(Teacher)
class Person{
public:
    //name, age
    string name;
    int age;

    //method:
    void getPersonInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};

//------create class B(Student):child class for class A(Person) and parent class for class D(graduateStudent) & class E(TA): 
class Student: virtual public Person{
public:
    //name, age, rollno:-->inherit name, age from the class A(person):
    double rollno;
    
    //method:
    void getStudentInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }
};

//------create class C(Teacher):child class for class A(Person) & parent class for class E(TA)
class Teacher: virtual public Person{
public:
    //name, age, subj, salary:-->inherit name, age from the class A(person):
    string subj;
    double salary;

    //method:
    void getTeacherInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Subject:"<<subj<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

//------create class D(graduateStudent):
class graduateStudent: public Student{
public:
   // name, age, rollno, researchArea--> inherit name, age, rollno from the class B(Student):
   string researchArea;

   //method:
   void getgraduateStudentinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Research Area:"<<researchArea<<endl;
   }
};

//-----create class E(TA):
class TA: public Student, public Teacher{
    //name, age, rollno, subj, salary--> inherit(name, age, rollno) & (subj , salary) from the class B(Student) & class C(Teacher) respectively:
    
    //method:
public:
    void getTAinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"subject:"<<subj<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main(){
    //create object for the TA:
    TA ta1;
    ta1.name="vaishali";
    ta1.age=21;
    ta1.rollno=123;
    ta1.subj="ML";
    ta1.salary=1200;

    ta1.getTAinfo();

    return 0;
}
