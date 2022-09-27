#include <stdio.h>
 
int main() {
 float n,z=0;
    int i,s=0;
    
    for(i=1;i<7;i++)
    {
        scanf("%f",&n);
        if(n>0)
            {   
             s++;
             z=z+n;
            }
    }z= z/s;
     printf("%d valores positivos\n%.1f\n",s,z);
   
   
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}