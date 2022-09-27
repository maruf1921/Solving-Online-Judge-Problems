#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int x,y,z;
    scanf("%d",&x);
 
    z=x/5;
    if(x%5!=0)
        z=z+1;
    printf("%d\n",z);
    return 0;
}
