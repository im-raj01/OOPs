#include<bits/stdc++.h>
using namespace std;
#define ll long long

void func(){
    static int x = 0;//initialisation statement --> 1 hi bar run hoga
    cout<<"x is: "<<x<<endl;
    x++;

}

class A{
public:
    int x;
    void incX(){
        x = x+1;
    }
};
class ABC{
public:
    ABC(){
        cout<<"constructor\n";
    }
    ~ABC(){
        cout<<"destructor\n";
    }
};
int main()
{
    // func();
    // func();
    // func();
    // A obj1;
    // A obj2;
    // obj1.x = 5;
    // obj2.x = 15;

    // cout<<obj1.x<<endl;
    // obj1.incX();
    // cout<<obj1.x<<endl;

    // cout<<obj2.x<<endl;
    // obj2.incX();
    // cout<<obj2.x<<endl;
    if(true){
       static ABC obj;
    }
    cout<<"end of main fun\n";


 return 0;
}