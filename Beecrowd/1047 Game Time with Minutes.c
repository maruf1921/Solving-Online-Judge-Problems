#include <stdio.h>
 
int main() {
 int a,b,c,d,e,f,x,y,z;
    
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    

     x= (a*60)+b;
     y= (c*60)+d;
      
    if(x>=y)
    {y= y+(24*60);}
    
     z= y-x;
    
     e= z/60;
     f= z%60;
    
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    
    
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}