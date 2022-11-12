#include<iostream>
using namespace std;

class a
{
    int id=14;

public:
    friend void display();

}obj;
class b
{
    string name = "mmm";
public:
    friend void display();
}obj1;

 void display()
{
    cout<<obj.id<<endl<<obj1.name;
}

int main()
{
   display();
    return 0;
}

