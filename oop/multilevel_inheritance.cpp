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

class c : public b
{
public:

}objc;

int main()
{
    objc.show();
    return 0;
}
