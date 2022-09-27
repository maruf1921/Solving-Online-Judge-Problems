#include <stdio.h>
 
int main() {
 int i,n;
    
    scanf("%d",&n);
    if(n%2==0)
    n= n+1;
    for(i=1;i<7;i++)
    {
        printf("%d\n",n);
        n=n+2;
    }
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}