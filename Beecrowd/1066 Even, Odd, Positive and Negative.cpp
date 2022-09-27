#include <iostream>
 
using namespace std;
 
int main() {int n,m=0,o=0,p=0,z=0;
    for(int i=1;i<6;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
        m++;
        }
        else
        {
         z++;
        }
 
        if(n>0)
        {
         o++;
        }
        else if(n<0)
    {
         p++;
        }
        
    }
    
    
    printf("%d valor(es) par(es)\n",m);
    printf("%d valor(es) impar(es)\n",z);
    printf("%d valor(es) positivo(s)\n",o);
    printf("%d valor(es) negativo(s)\n",p);
    
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}