#include <stdio.h>
int main()
{
 int n,x[46],y,i,j,sum=0,temp;

    scanf("%d",&n);

    x[0]=0;
    x[1]=1;

    for(i=2;i<n;i++)
    {
       x[i]=x[i-1]+x[i-2];
    }
    //printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d",x[i]);
        if(i!=n-1)
            printf(" ");
        else break;
    }
    printf("\n");
         return 0;
 }




