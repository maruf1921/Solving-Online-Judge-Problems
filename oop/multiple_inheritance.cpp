#include<iostream>
using namespace std;


class a
{
public:
    int x=5;

}obja;

class b
{
public:
    int y = 10;
}objb;

class c : public a, public b
{
public:

    int z=x+y;
}objc;

int main()
{
    cout<<objc.z;
    return 0;
}
