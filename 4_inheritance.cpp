#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Person{
public:
     string name;
     int age;

    //  Person(){
    //     cout<<"parent constructor \n";
    //  }   
    Person(string name, int age){
        cout<<"parent constructor \n";
        this->name = name;
        this->age = age;
     }  
     ~Person(){
        cout<<"parent destructor is called \n";
    }
};

class Student : public Person{
public:
    int rollno;

    // Student(){
    //     cout<<"child constructor \n";
    // }

    Student(string name, int age,int rollno) : Person(name,age){
        cout<<"child constructor \n";
        this->rollno = rollno;
    }
    // void getInfo(){  
    //     cout<<"name :"<<name <<endl;
    //     cout<<"age :"<<age <<endl;
    //     cout<<"rollno :"<<rollno <<endl;

    // }
    ~Student(){
        cout<<"child destructor is called \n";
    }
};

//multi level
class GradStudent : public Student{
public:
    string researchArea;

    GradStudent(string name, int age,int rollno,string researchArea) : Student(name, age,rollno){
        this->researchArea = researchArea;
    }
    void getInfo(){  
        cout<<"name :"<<name <<endl;
        cout<<"age :"<<age <<endl;
        cout<<"rollno :"<<rollno <<endl;

    }
};
int main()
{
    // Student s1;
    // s1.name = "rahul kumar";
    // s1.age = 21;
    // s1.rollno = 12;
    Student s1("rahul",21,1223);
    // s1.getInfo();

    GradStudent s2("tony Stark",35,125,"Quantum physics");
    s2.getInfo();


 return 0;
}