#include <stdio.h>
int main()
{
    int i;
    double n,x[100],y,j,sum=0,temp,a,b,c;

    scanf("%lf",&n);

    for(i=0;i<100;i++)
         {
            printf("N[%d] = %.4lf\n",i,n);
            n=n/2;
         }
         return 0;
}
