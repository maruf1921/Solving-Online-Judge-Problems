#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main()
{
    int i,n,z;
    char ch[100];
 
 
    scanf("%d %s",&n,&ch);
   // gets(ch);
  // printf("%d %s\n",n,ch);
    z=0;
 
    for(i=0;i<n;i++)
    {
        //printf("%c ",ch[i]);
       // printf("%c\n",ch[i+1]);
        if(ch[i]==ch[i+1])
           z++;
    }
 
    printf("%d\n",z);
 
 
    return 0;
}