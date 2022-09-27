#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a[1000],b[1000],n,k,i,z,m[1000];
 
    scanf("%d",&n);
    z=0;
    //m[0]=0;
 
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
 
        m[i]=m[i-1]-a[i]+b[i];
 
        if(z<m[i])
        {
            z=m[i];
        }
 
       // printf("%d %d %d %d\n",a[i],b[i],m[i],z);
 
 
 
    }
 
    printf("%d\n",z);
 
    return 0;
}