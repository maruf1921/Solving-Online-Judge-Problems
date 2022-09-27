#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t, d=1;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%3==0) printf("Case %d: Peaceful\n",d);
        else printf("Case %d: Fight\n",d);
        d++;
    }
    //printf("");

    return 0;
}
