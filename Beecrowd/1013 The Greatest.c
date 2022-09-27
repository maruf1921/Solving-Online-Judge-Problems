#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x,M;
    scanf("%d%d%d",&a,&b,&c);
    
        x=(((a+b)+abs(a-b))/2);
    
        M=(((x+c)+abs(x-c))/2);
   
    printf("%d eh o maior\n",M);
    return 0;
}