#include <stdio.h>
int main()
{
 int n=1,x,y,i,j,sum=0,temp;

    scanf("%d%d",&x,&y);

    for(i=1;i<=y;i++)
    {
        for(j=1;j<=x;j++)
        {

            printf("%d",n);
            n=n+1;
            if(j!=x)
                printf(" ");
            else break;
            if(n==y+1)break;
        }
        if(n==y+1)break;
        printf("\n");
    }
    
    printf("\n");
         return 0;
 }


