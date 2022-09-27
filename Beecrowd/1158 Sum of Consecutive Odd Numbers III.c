#include<stdio.h>
int main()
{
    int n,x,y,i,j,a[20],u=0,v=0;
    float sum=0,avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        for(j=1;j<=y;j++)
          {
              if(x%2!=0)
              {
                u=u+x;
                x=x+2;
              }

                else
                {
                x=x+1;
                j--;
                //printf("%d\n",x);
                }
          }
        printf("%d\n",u);
        u=0;

    }


    return 0;
}
