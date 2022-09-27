#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,j;
    int p;

    for(i=0.0;i<2.2;i=i+.2)
    {
        for(j=1;j<=3;j++)

            {
                if(i==0.0||i==1.0||i>=2.00)
                      printf("I=%.0f J=%.0f\n",i,i+j);

                else
                    printf("I=%.1f J=%.1f\n", i,i+j);
            }

    }
    return 0;
}
