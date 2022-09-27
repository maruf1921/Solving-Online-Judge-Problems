#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int n,a,i;
    char m[1010];
 
    gets(m);
 
    if (m[0]>=97 && m[0]<=122)
    {
        m[0]=m[0]-32;
    }
 
    printf("%s\n",m);
 
    return 0;
}