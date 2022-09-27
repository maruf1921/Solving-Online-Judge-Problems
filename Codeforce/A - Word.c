#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int n,a,i,b,ne;
    char m[1010];
 
    gets(m);
    a=0;
    b=0;
    n=strlen(m);
 
    for(i=0;i<n;i++)
    {
        if (m[i]>=97 && m[i]<=122)
        {
            a++;
            //m[0]=m[0]-32;
        }
        else
        {
            b++;
        }
 
 
    }
   // printf("%d %d\n",a,b);
 
    if(a>=b)
    {
        ne = strlwr(m);
    }
    else
    {
        ne = strupr(m);
    }
 
 
 
    printf("%s\n",ne);
 
    return 0;
}