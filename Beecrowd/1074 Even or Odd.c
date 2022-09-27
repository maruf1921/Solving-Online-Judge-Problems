#include <stdio.h>
 
int main() {
int i,n,x;
    
   scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        scanf("%d",&x);
        
      if(x==0)
      {
        printf("NULL\n");
       }
      else if(x>0)
      {
        if(x%2==0)
      {
        
        printf("EVEN POSITIVE\n");
       }
        else if(x%2!=0)
      {
        
        printf("ODD POSITIVE\n");
       }
       }
      else if(x<0)
      {
        
         if(x%2==0)
      {
        
        printf("EVEN NEGATIVE\n");
       }
        else if(x%2!=0)
      {
        
        printf("ODD NEGATIVE\n");
       }
       }
   }
    
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}