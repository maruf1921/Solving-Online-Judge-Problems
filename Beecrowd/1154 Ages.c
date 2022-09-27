#include<stdio.h>
int main()
{
    int n,i,a[20],t=0,sum=0;
    float avg;
    //scanf("%d",&n);
    for(i=1;i<100;i++)
    {
        scanf("%d",&n);
        if(n<0) break;
        sum=sum+n;

    }
    avg = (float)sum/(i-1);
    printf("%.2f\n",avg);
    return 0;
}
