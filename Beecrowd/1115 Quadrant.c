#include <stdio.h>

int main() {
 int a,t,i,n,m,x,z=0;


    for(a=1;a=1;a++)
    {
       scanf("%d%d",&m,&n);
         if(m==0||n==0)
        {
        break;
        }
         else if(m>0&&n>0)
        {

              printf("primeiro\n");

        }
         else if(m>0&&n<0)
        {

              printf("quarto\n");

        }
         else if(m<0&&n<0)
        {

              printf("terceiro\n");

        }
         else if(m<0&&n>0)
        {

              printf("segundo\n");

        }

      }


    return 0;
}
