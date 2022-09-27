#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   long long int n,i,a,d;
 
   scanf("%lld",&n);
   a=0;
 
   for(i=0;n!=0;i++)
   {
        d=n%10;
        n=n/10;
       // printf("%lld\n",d);
 
        if(d==4||d==7)
        {
            a++;
        }
   }
 
   if(a==4||a==7)
    printf("YES\n");
   else
    printf("NO\n");
 
   //printf("%lld\n",a);
    return 0;
}