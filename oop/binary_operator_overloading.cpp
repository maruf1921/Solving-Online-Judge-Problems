#include<iostream>
using namespace std;

class complexx
{
    int real,img;
public:

    complexx(int x=0, int y=0)
    {
        real = x;
        img = y;
    }
    complexx operator +(complexx const &obj)
    {
        complexx t;
        t.real= real + obj.real;
        t.img= img + obj.img;
        return t;
    }
    void print()
    {
        cout<<real <<" + "<<img<<"i"<<endl;
    }
};


int main()
{
   complexx a(2,3);
   complexx b(2,3);

   complexx c=a+b;
   c.print();


    return 0;
}



