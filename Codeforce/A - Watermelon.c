#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,i;
 
    scanf("%d",&n);
    i=n-2;
    if(i%2==0&&n>2)
    {
        printf("YES\n");
 
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}