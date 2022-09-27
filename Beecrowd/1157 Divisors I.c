#include<stdio.h>
int main()
{
    int n,i,a[20],u=1,v=1;
    float sum=0,avg;
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    {
        if(n%i==0)
            printf("%d\n",i);
        //else break;

    }


    return 0;
}

