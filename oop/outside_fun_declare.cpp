
#include<iostream>
using namespace std;

class A
{
    int x=5;
public:
   void add(int a,int b);

};
void A :: add(int a,int b)
    {
        int z = a+b;

        cout<<z;
    }
int main()
{
    A obj;
    obj.add(5,6);
    return 0;
}
