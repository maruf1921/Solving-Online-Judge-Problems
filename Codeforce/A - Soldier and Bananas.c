#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int k,n,w,i,z,borrow;
    scanf("%d%d%d",&k,&n,&w);
    z=0;
 
    for(i=1;i<=w;i++)
    {
        z=z+k*i;
       //printf("%d\n",z);
    }
    if(z>n)
    {
        borrow = z-n;
    }
 
 
 
 
    printf("%d\n",borrow);
    return 0;
}
