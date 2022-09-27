#include <stdio.h>

int main()
{
    int n,x,y,i,j,k,z=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x ,&y);
            if(y>x)
            {
                for(k=y-1;k>x;k--)
                    if(k%2!=0)

                        {
                            z=z+k;
                           // printf("%d\n",k);
                        }
            }
            else if(x>y)
                for(j=y+1;j<x;j++)

                        if(j%2!=0)

                    {

                        z=z+j;
                       // printf("%d\n",j);



            }printf("%d\n",z);
             z=0;

    }


    return 0;
}
