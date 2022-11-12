#include<iostream>
using namespace std;

class a
{
public:
    int id;
     a(int x,int y)
     {
         int z = x + y;
         cout <<z<<endl;
     }
     ~a()
     {
         cout<<"destructor called"<<endl;
     }
     void add(int x,int y ,int t)
     {
         int z = x + y;
         cout <<z<<endl;
     }

};


int main()
{
    a o(5,6);
    o.add(5,4,6);
    return 0;
}
