#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i,j,a,b,z;
    int x[100][100];
 
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&x[i][j]);
 
            if(x[i][j]==1)
            {
                if(i>=3) a=i-3;
                else    a=3-i;
 
                if(j>=3) b=j-3;
                else    b=3-j;
 
            }
        }
    }
 
 
    printf("%d\n",a+b);
 
    return 0;
}