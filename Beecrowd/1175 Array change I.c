#include <stdio.h>
int main()
{
    int i;
    int n,x[20],y,j,sum=1,temp;

         for(i=0;i<20;i++)
         {
            scanf("%d",&x[i]);
         }

         for(j=0,i=19;i>=0;j++,i--)
         {

            printf("N[%d] = %d\n",j,x[i]);
         }
         return 0;
 }
