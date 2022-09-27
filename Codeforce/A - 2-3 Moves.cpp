#include <iostream>
 
using namespace std;
 
int main()
{
    int t,i,n,sum;
 
    cin>>t;
 
    for(i=0; i<t ; i++)
    {
        cin>>n;
 
        if(n==1)
        {
            cout<<"2"<<endl;
        }
        else{
 
        sum = n/3;
        if(n%3!=0)
            sum++;
 
        cout<<sum<<endl;
 
        }
 
    }
}