#include <stdio.h>
int main()
{
 int x,y,i,sum=0,temp;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
   // printf("%d %d",x,y);
    for(i=x;i<=y;i++)
    {   if(i%13!=0)
        sum=sum+i;

    }
        printf("%d\n",sum);
         return 0;
 }