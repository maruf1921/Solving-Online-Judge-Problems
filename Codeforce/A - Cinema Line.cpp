#include <iostream>
 
using namespace std;
 
int main()
{
    int a=0,b=0,c,i,n,z,x[100001]={};
 
    cin>>n;
 
    for(i=0;i<n;i++)
    {
        cin>>x[i];
 
        if(x[i]==25)
        {
 
            a++;
            if(a<0||b<0)
                break;
           // cout<<"a "<<a<<endl;
        }
        else if(x[i]==50)
        {
 
            a--;
            b++;
            if(a<0||b<0)
                break;
 
          //  cout<<"a "<<a<<endl;
          //  cout<<"b "<<b<<endl;
        }
        else
        {
            if(b>0)
            {
                b--;
                a--;
            }
            else
            {
               a=a-3;
            }
 
            if(a<0||b<0)
                break;
 
          //  cout<<"a "<<a<<endl;
          //  cout<<"b "<<b<<endl;
        }
 
 
    }
 
    if(a<0||b<0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
 
 
    return 0;
}
 