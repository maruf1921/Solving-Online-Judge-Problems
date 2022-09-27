#include<stdio.h>
int main()
{
    int n,i,a[20],u=1,v=1;
    float sum=0,avg;
    //scanf("%d",&n);
    for(i=1;i<=100;i++)
    {


        //sum=sum+((float)(i+2)/i*2);
       // u=1;
        //v=1;

        if(u>=41) break;
        //printf("%d %d \n",u,v);

        sum=sum+((float)u/v);

         u=u+2;
        v=v*2;
    }
   // avg = (float)u/v;
 printf("%.2f\n",sum);

    return 0;
}
