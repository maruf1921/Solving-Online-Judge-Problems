#include<iostream>
using namespace std;

class shape
{

public:
    void area(int a,int b)
    {
        cout<<"Area of ractangle :"<<a*b;
    }
    void area(int a)
    {
        cout<<"Area of circle :"<<3.1415*a;
    }

};


int main()
{
   shape obj;
   obj.area(5,6);
    return 0;
}

