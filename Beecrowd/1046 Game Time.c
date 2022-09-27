#include <stdio.h>

int main() {
 int a,c,e,x,y,z;

    scanf("%d%d",&a,&c);



     x= (a*60);
     y= (c*60);

    if(x>=y)
    {y= y+(24*60);}

     z= y-x;

     e= z/60;


     printf("O JOGO DUROU %d HORA(S)\n",e);

    return 0;
}
