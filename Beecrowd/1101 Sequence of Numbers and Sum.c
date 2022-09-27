#include <stdio.h>

int main() {
 int a,t,i,n,m,x,z=0;


    for(a=1;a=1;a++)
    {
       scanf("%d%d",&m,&n);
         if(m<=0||n<=0)
        {
        break;
        }
         else if(m>n)
        {
            t=m;
            m=n;
            n=t;


         for(i=m;i<=n;i++)
           {
              z=z+i;
              printf("%d ",i);
           }
              printf("Sum=%d\n",z);
              z=0;
           // break;
        }
        else if(m<n)
        {

         for(i=m;i<=n;i++)
           {
              z=z+i;
              printf("%d ",i);
           }
              printf("Sum=%d\n",z);
              z=0;
          //  break;
        }

      }


    return 0;
}
