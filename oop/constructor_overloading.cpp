#include<iostream>
using namespace std;

class shape
{

public:
    shape(int a,int b)
    {
        cout<<"Area of ractangle :"<<a*b;
    }
    shape(int a)
    {
        cout<<"Area of circle :"<<3.1415*a;
    }

};


int main()
{
   shape obj(6);

    return 0;
}


