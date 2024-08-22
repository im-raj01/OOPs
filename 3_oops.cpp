//Destructor
// shallow and deep copy:
#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    //destructor:
    ~Student(){
        cout<<"hi, i delete everything"<<endl;
        delete cgpaPtr;
    }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
    }
};

int main()
{
    Student s1("rahul",8.9);
    s1.getInfo();
    cout<<s1.name<<endl;
    cout<<*s1.cgpaPtr<<endl;
 return 0;
}