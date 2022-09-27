#include<stdio.h>

int main()
{
    
    
    float n,x,y;
    scanf("%f",&n);
    
    if(n>0&&n<=400)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",(n+n*.15),(n*.15));
    }
   else if(n>400.01&&n<=800)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",(n+n*.12),(n*.12));
    }
   else if(n>800.01&&n<=1200)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",(n+n*.10),(n*.10));
    }
   else if(n>1200.01&&n<=2000)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",(n+n*.07),(n*.07));
    }
    else if(n>2000)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",(n+n*.04),(n*.04));
    }
    
    
    
     
    return 0;
}