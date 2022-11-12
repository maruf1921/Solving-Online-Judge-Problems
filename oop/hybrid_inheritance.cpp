#include<iostream>
using namespace std;


class a
{
public:
    void show()
    {
        cout<<"class A";
    }

}obja;

class b : virtual public a
{
public:

}objb;

class c : virtual public a
{
public:

}objc;

class d : public b, public c
{

}objd;

int main()
{
    objd.show();
    return 0;
}

