#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a[100],b,m,n,o,i;
 
    scanf("%d %d",&n,&m);
    b=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>=a[m]&&a[i]!=0)
        {
            b++;
        }
    }
     printf("%d\n",b);
 
 
    return 0;
}