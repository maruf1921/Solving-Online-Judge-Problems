#include <stdio.h>
int main()
{
    int i;
 float n,x[100],y,j,sum=1,temp;



 for(i=0;i<100;i++)
 {
    scanf("%f",&x[i]);
    if(x[i]<=10)
    {
        printf("A[%d] = %.1f\n",i,x[i]);
    }
 }
 return 0;
 }
