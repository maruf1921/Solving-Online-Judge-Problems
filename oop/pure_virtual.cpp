#include<iostream>
using namespace std;


class a
{
public:
    virtual void show()=0 ;

};

class b :public a
{
public:
    void show()
    {
        cout<<"class b";
    }
}objb;

class c : public a
{
public:
void show()
    {
        cout<<"class c";
    }
}objc;

int main()
{
    objc.show();

    return 0;
}
