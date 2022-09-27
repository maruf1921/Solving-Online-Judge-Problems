#include<stdio.h>
int main()
{
    int n,i,j,x,y,z=0;

    scanf("%d",&n);


    for(j=1;j<=n;j++)
    {
        scanf("%d",&x);
        for(i=1;i<=100000;i++)
            {
                if(x%i==0&&x!=i)
                {
                   // printf("%d\n",i);
                    z=z+i;

                }

            }

        if(z==x)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
        z=0;
    }
    //printf("%d\n",z);
   //

    return 0;
}
