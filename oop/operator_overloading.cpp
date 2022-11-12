#include<iostream>
using namespace std;

class shape
{

public:
    int id = 14;
    void operator ++()
    {
        id++;
        cout<<"ID :"<<id;
    }


};


int main()
{
   shape obj;
   ++obj;
   ++obj;
    return 0;
}


