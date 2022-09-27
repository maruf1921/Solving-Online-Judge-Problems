#include <stdio.h>
int main()
{
    int i;
    int n,x[1000],y,j,sum=0,temp,a,b,c;

    scanf("%d",&n);

         for(j=0,i=0;i<n;i++)
         {

            for(i=0;i<1000;i++)
         {  if(j==n)
         {
             j=0;
         }
            printf("N[%d] = %d\n",i,j);
            j++;
         }
         }


         return 0;
}
