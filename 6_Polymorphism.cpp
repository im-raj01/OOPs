#include<bits/stdc++.h>
using namespace std;
#define ll long long

//compile time
class Student{
public:
    string name;

    Student(){
        cout<<"non-parameterized\n";
    }
    Student(string name){
        this->name = name;
        cout<<"parameterized\n";
    }
};

//2. Run time polymorphism:
//
class Parent{
public:
    void getInfo(){
        cout<<"Parent class\n";
    }

    virtual void hello(){
        cout<<"hello from parent\n";
    }
};
class Child : public Parent{
public:
    void getInfo(){
        cout<<"child class\n";
    }
    void hello(){
        cout<<"hello from child\n";
    }
};
int main()
{
    Student s1;
    Child c1;
    c1.getInfo();
    c1.hello();

 return 0;
}