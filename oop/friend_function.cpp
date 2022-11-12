#include<iostream>
using namespace std;

class a
{
    int id=14;

public:
    friend void display();

}obj;

 void display()
{
    cout<<obj.id;
}

int main()
{
   display();
    return 0;
}
