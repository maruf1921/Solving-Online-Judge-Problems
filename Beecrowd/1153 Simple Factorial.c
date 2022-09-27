#include<stdio.h>
int main()
{
    int n,i,a[20],t=1;
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
        t=t*i;


    }printf("%d\n",t);
    return 0;
}
