#include<stdio.h>

int main()
{
    int x,a,b,c,d,e,f,g,h,i,j,k,l;
   
    scanf("%d",&x);
    
    a = x/3600;
    b = x%3600;
    c = b/60;
    d = b%60;
    
     
    printf("%d:%d:%d\n",a,c,d);
   
  
    
   
    return 0;
}