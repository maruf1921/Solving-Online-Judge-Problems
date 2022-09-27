#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
 
int main()
{
    int n,a,i;
    char m[5];
 
    scanf("%d",&n);
    a=0;
    for(i=0;i<=n;i++)
    {
        gets(m);
 
        if(strcmp(m,"X++")==0)        a++;
        else if(strcmp(m,"X--")==0)   a--;
        else if(strcmp(m,"++X")==0)   ++a;
        else if(strcmp(m,"--X")==0)   --a;
 
    }
    printf("%d\n",a);
 
    return 0;
}
