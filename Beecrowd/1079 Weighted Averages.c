#include <stdlib.h>

int main()
{
    int n,i;
    float a,b,c,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);

        x = ((a*2)+(b*3)+(c*5))/10 ;

        printf("%.1f\n",x);

    }



    return 0;
}
