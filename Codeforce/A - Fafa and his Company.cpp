#include <iostream>
 
using namespace std;
 
int main()
{
    int n,i,sum=0;
    cin>>n;
 
    for(i=1;i<=n;i++)
    {
        n=n-1;
 
        if(n%i==0)
        {
            sum++;
        }
        //cout<<n<<" "<<i<<endl;
    }
    cout<<sum<<endl;
    return 0;
}