#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 float a,b,c, perimeter, area;
     scanf("%f%f%f",&a,&b,&c);
    
     if(a+b>c&&b+c>a&&a+c>b){
     perimeter = a+b+c ;
     printf("Perimetro = %.1f\n", perimeter);
    }
     else{
     area = .5*(a+b)*c ;
     printf("Area = %.1f\n",area);
    }
    return 0;
}