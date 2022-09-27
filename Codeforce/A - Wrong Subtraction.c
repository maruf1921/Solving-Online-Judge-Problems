#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,k,i,z;
 
    scanf("%d%d",&n,&k);
 
    for(i=0;i<k;i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
           n--;
        }
    }
 
    printf("%d\n",n);
    return 0;
}