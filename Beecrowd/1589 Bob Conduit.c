#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,z;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        z = a + b;
        printf("%d\n",z);
    }
    return 0;
}
