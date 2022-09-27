#include <stdio.h>
int main()
{
 int n,x[10],y,i,j=1,sum=0,temp;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        j=j*1;
        printf("%d %d %d\n",j,j*j,j*j*j);
        printf("%d %d %d\n",j,j*j+1,j*j*j+1);
        j=j+1;
    }
         return 0;
 }




