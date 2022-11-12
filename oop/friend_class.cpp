#include<iostream>
using namespace std;

class b;
class a
{
    int id=14;

public:
    friend class b;

}obja;

class b
{
public:
    void display(a obj)
    {
        cout<<obj.id ;
    }
}objb;


int main()
{
    objb.display(obja);
    return 0;
}

