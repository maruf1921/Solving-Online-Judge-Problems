#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,i,z,x;
    char ch[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(ch);
        z = strlen(ch);
        if(z<11)
            printf("%s\n",ch);
        else
        {
 
            printf("%c%d%c\n",ch[0],z-2,ch[z-1]);
        }
 
    }
    return 0;
}