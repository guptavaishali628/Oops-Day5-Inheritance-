//Hierarchial Inheritance--> when multiple child class inhrit properties from the one parent class:

#include<iostream>
#include<string>
using namespace std;
// create class A(Person)---> Parent class for class B(Student) And class C(Teache):
class Person{
    public:
      //name, age:
      string name;
      int age; 
};

// create child class B(Student) of class A(person):
class Student:public Person{
    public:
      //name, age, rollno ---> (name & age inherit from the class Person)
      double rollno;

    //method:
    void getStudentInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }  
};

// create child class C(Teacher) of class A(person):
class Teacher:public Person{
    public:
      //name, age, Subject ---> (name & age inherit from the class Person)
      string subj;

    //method:
    void getTeacherInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Subject:"<<subj<<endl;
    }  
};

int main(){
    //create object for Student Class:
    Student S1;
    S1.name="vaishali";
    S1.age=21;
    S1.rollno=119;
    S1.getStudentInfo();

    //create object for Teacher Class:
   Teacher T1;
    T1.name="Stuti";
    T1.age=22;
    T1.subj="Machine Learning";
    T1.getTeacherInfo();

    return 0;
}
