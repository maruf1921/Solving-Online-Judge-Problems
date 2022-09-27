#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,i,a,b,c,x,z=0;
 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
 
        x = a+b+c;
        if(x>=2)
        {
            z=z+1;
        }
 
    }
 
    printf("%d\n",z);
    return 0;
}
