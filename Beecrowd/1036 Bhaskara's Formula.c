#include<stdio.h>
#include<math.h>

int main()
{
    
    double a,b,c,r1,r2;
    
    scanf("%lf%lf%lf",&a,&b,&c);
    
    if(b*b-4*a*c<0||a==0)
    printf("Impossivel calcular\n");
    
    else
    {
    r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    
    printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
     
    
   // printf("Hello world!");
    return 0;
}