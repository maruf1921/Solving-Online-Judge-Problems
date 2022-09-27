#include <stdio.h>
int main()
{
    int i,j,m,k=0;
    double n,sum,avg;
    char a[2];

    //scanf("%d",&m);
    scanf("%s",a);

    for(i=0;i<12;i++)
    {
       for(j=0;j<12;j++)
        {
            scanf("%lf",&n);

            if(i+j<11 && j>i)
            {
                k++;
               sum=sum+n;
               avg= sum/k;
            }
        }
    }

    if(a[0]=='S')
        printf("%.1lf\n",sum);
    else if(a[0]=='M')
        printf("%.1lf\n",avg);

         return 0;
}
