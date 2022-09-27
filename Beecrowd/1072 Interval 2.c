#include <stdio.h>
 
int main() {
 
     
    int i,n,x,z=0,y=0;
    
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x>=10&&x<=20)
        {
         z++;
        }
        else
        {
        y++;
        }
        
    }
    
    
    printf("%d in\n%d out\n",z,y);
    
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}