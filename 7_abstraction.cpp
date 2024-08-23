#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Shape{ // abstract class
   virtual void draw() = 0; // pure virtual function.
};
class Circle: public Shape{
public:
    void draw(){
        cout<<"drawing a circle\n";
    }
};
int main()
{
    Circle c1;
    c1.draw();

 return 0;
}