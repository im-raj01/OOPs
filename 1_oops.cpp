#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Teacher{
    //Access Modifiers:
    private:
    double salary;
    public:
    //properties / attributes
    string name;
    string dept;
    string subject;

    //constructor
    //non-parameterized:
    // Teacher(){
    //     cout<<"Hi, i am constructor"<<endl;
    //     dept = "computer science";
    // }

    //parameterized:
    Teacher(string name, string dept,string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;

    }

    //copy constructor:
    Teacher(Teacher &orgObj){// pass by reference
        cout<<"I am copy constructor"<<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
    

    // Methods/member function
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void setSalary(int s){
        salary = s;
    }
    //getter:
    double getSalary(){
        return salary;
    }

    void getInfo(){
    cout<<"name is : "<<name<<endl;
    cout<<"subject is: "<<subject<<endl;
}
};

class Account{
private:
    double balance;
    string password; // data hiding
public:
    string accountId;
    string userName;
    
};



int main()
{
    // Teacher t1; // internally constructor call
    // Teacher t2;
    // t1.name = "shradha";
    // t1.subject = "c++";
    // // t1.dept = "CS";
    // // t1.salary = 50000;
    // t1.setSalary(50000);
    // cout<<t1.getSalary()<<endl;
    // cout<<t1.dept<<endl;

    Teacher t3("shradha","computerScience","C++",25000);
    // t3.getInfo();
    // Teacher t4(t3); //default copy constructor-invoke
    // t4.getInfo();
    Teacher t5(t3); // custom copy constructor called
    t5.getInfo();
 return 0;
}