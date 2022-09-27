#include <stdio.h>
int main()
{
 int n,x[10],y,i,j,sum=0,temp;

 for(i=0;i<10;i++)
 {
     scanf("%d",&x[i]);
     if(x[i]<=0)
     {
         x[i]=1;
     }
     printf("X[%d] = %d\n",i,x[i]);
 }


 return 0;
 }
