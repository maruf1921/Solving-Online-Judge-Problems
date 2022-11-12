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

class b : public a
{
public:

}objb;

class c : public a
{
public:

}objc;

int main()
{
    objb.show();
    return 0;
}
