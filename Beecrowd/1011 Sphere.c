#include <stdio.h>
int main(){

    //int a,b,a2,b2;
   // float c,c2;
    double volume,pi = 3.14159, R;
    scanf("%lf",&R);
    volume = (4/3.0) * pi * R*R*R ;

    printf("VOLUME = %.3f",volume);
    printf("\n");


    return 0;
}
