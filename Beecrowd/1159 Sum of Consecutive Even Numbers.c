#include<stdio.h>
int main()
{
    int n,x,y,i,j,a[20],u=0,v=0;
    float sum=0,avg;
    //scanf("%d",&n);
    for(i=1;i<=1000;i++)
    {
        scanf("%d",&x);
        if(x==0) break;
        for(j=1;j<=5;j++)
          {
              if(x%2!=0)
              {
                x=x+1;
                j--;
              }

                else
                {
                    u=u+x;
                    x=x+2;

                }
          }
        printf("%d\n",u);
        u=0;

   }


    return 0;
}
