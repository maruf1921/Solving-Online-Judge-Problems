#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    float w,l;
    for(int i=0;i>=0;i++)
    {
         cin>>l>>w;
         if(w==0&&l==0)
         {
                  break;
         }
         float m, y=0;
         for(float j=(l/2)+0.001;j<=l;j+=0.001)
         {
             float x;
             float a, b, dis;
             x=j;
             a=l-x;
            // b=sqrt((x*x)-((x-a)*(x-a)));
             b=sqrt((x*x)-(a*a));
             dis=2*x+(w-b);
             if(y==0) m=dis, y=1;
             if(dis<m) m=dis;
             //printf("%.4f asche\n",dis);
         }
         printf("%.4f\n",m);
    }

    return 0;
}
