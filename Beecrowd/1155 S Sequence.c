#include<stdio.h>
int main()
{
    int n,i,a[20],t=0;
    float sum=0,avg;
    //scanf("%d",&n);
    for(i=1;i<=100;i++)
    {


        sum=sum+((float)1/i);

    }
    //avg = (float)sum/(i-1);
    printf("%.2f\n",sum);
    return 0;
}
