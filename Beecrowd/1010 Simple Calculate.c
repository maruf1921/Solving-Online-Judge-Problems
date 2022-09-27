#include <stdio.h>
int main(){

    int a,b,a2,b2;
    float c,c2;

    scanf("%d %d %f %d %d %f",&a,&b,&c,&a2,&b2,&c2);

    printf("VALOR A PAGAR: R$ %.2f",(b*c+b2*c2));
    printf("\n");


    return 0;
}

