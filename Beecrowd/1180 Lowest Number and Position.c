#include <stdio.h>
int main()
{
    int i;
    int n,j,min;

    scanf("%d",&n);
    int x[n];

    for(i=0;i<n;i++)
         {
            scanf("%d",&x[i]);
         }
            min=x[0];
            j=0;
        for(i=1;i<n;i++)
        {
            if(min>x[i]){
                min = x[i];
                j=i;
            }

        }
        printf("Menor valor: %d\nPosicao: %d\n",min,j);
         return 0;
}
