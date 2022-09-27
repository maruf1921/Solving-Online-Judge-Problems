#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n,k,l;
    char a[10],b[10];

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%s %s",&a,&b);
       if (!strcmp(a,b))
        printf("Caso #%d: De novo!\n",i);
        else if(((!strcmp(a,"tesoura"))&&(!strcmp(b,"papel")))
                 ||((!strcmp(a,"papel"))&&(!strcmp(b,"pedra")))
                ||((!strcmp(a,"pedra"))&&(!strcmp(b,"lagarto")))
                 ||((!strcmp(a,"lagarto"))&&(!strcmp(b,"Spock")))
                ||((!strcmp(a,"Spock"))&&(!strcmp(b,"tesoura")))
                 ||((!strcmp(a,"tesoura"))&&(!strcmp(b,"lagarto")))
                ||((!strcmp(a,"lagarto"))&&(!strcmp(b,"papel")))
                 ||((!strcmp(a,"papel"))&&(!strcmp(b,"Spock")))
                ||((!strcmp(a,"Spock"))&&(!strcmp(b,"pedra")))
                 ||((!strcmp(a,"pedra"))&&(!strcmp(b,"tesoura"))))

                printf("Caso #%d: Bazinga!\n",i);
        else
            printf("Caso #%d: Raj trapaceou!\n",i);

    }
    return 0;
}
