#include <stdio.h>

int main() {
 int a,t,i,n,m,x,z=0;
 float k;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%d%d",&m,&n);

       if(n==0)
        printf("divisao impossivel\n");
       else
        {
            k = (m)/(float)n;
            printf("%.1f\n",k);
        }

      }


    return 0;
}
