#include <stdio.h>
//#include <math.h>
int main(){

    float a,b,c;
   // float c,c2;

    scanf("%f %f %f",&a,&b,&c);

    //float tri=a+c+sqrt((a*a)+(c*c));

   printf("TRIANGULO: %.3f",.5*a*c);
    printf("\n");
    printf("CIRCULO: %.3f",3.14159*c*c);
    printf("\n");
    printf("TRAPEZIO: %.3f",.5*(a+b)*c);
    printf("\n");
    printf("QUADRADO: %.3f",b*b);
    printf("\n");
    printf("RETANGULO: %.3f",a*b);
    printf("\n");

    return 0;
}


