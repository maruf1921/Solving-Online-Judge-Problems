#include<stdio.h>

int main()
{
    int n,a=0,b=0,c=0,d=0,x;
    for(int i = 1; i<200; i++)
    {
        scanf("%d",&x);
        if(x==1)
        a++;
        else if(x==2)
        b++;
        else if(x==3)
        c++;
        else if(x==4)
        break;
        
    }printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,b,c);
    return 0;
}