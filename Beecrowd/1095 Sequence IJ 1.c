#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i=1,j=65;

    for(i;a<20;i=i+3)
    {
        j=j-5;
        printf("I=%d J=%d\n",i,j);

        if(j==0)
            break;
    }
    return 0;
}
