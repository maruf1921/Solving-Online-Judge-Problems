#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,z=0,i,c=0,r=0,s=0;
    double e=0,f=0,g=0;
    char C,R,S,p,b='%';

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&t,&p);

        if(p=='C')
            c=c+t;
        else if(p=='R')
            r=r+t;
        else if(p=='S')
            s=s+t;
    }z=c+r+s;
    printf("Total: %d cobaias\n",z);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    e=((c/(z*1.00))*100.00);
    f=((r/(z*1.00))*100.00);
    g=((s/(z*1.00))*100.00);
    printf("Percentual de coelhos: %.2lf %c\n",e,b);
    printf("Percentual de ratos: %.2lf %c\n",f,b);
    printf("Percentual de sapos: %.2lf %c\n",g,b); 
    
    return 0;
}
