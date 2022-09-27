#include <stdio.h>
int main(){

    char name[20];
    double a,b;

    scanf("%s %lf %lf",&name,&a,&b);
    double salary = a+((b*15)/100);

    printf("TOTAL = R$ %.2lf",salary);
    printf("\n");


    return 0;
}

