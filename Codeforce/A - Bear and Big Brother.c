#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a,b,i;
 
    scanf("%d %d",&a,&b);
 
    for(i=1;i<10;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
            break;
        //printf("%d %d\n",a,b);
    }
    printf("%d\n",i);
    return 0;
}