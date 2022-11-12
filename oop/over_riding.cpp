
#include<iostream>
using namespace std;

class rectangule
{

public:
    virtual void area(int a,int b)
    {
        cout<<"Area of ractangle :"<<a*b;
    }
};
class triangle : public rectangule
{

public:
    void area(int a,int b)
    {
        cout<<"Area of triangle :"<<.5*a*b;
    }
};


int main()
{
   rectangule *p;
   triangle o;

   p = &o;
   p->area(5,6);
    return 0;
}

