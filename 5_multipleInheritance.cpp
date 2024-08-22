#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};
class TA : public Student, public Teacher{

};
int main()
{
    TA t1;
    t1.name = "tony stark";
    t1.salary = 35000;
    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;

 return 0;
}