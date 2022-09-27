#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int room,numberOfPeople,numberOfAccomodation,i,sum = 0;
 
    //cin >> room ;
    scanf("%d",&room);
 
    for(i=1;i<=room;i++)
    {
       // cin >> numberOfPeople >> numberOfAccomodation ;
        scanf("%d %d",&numberOfPeople,&numberOfAccomodation);
 
        if(numberOfPeople+2<=numberOfAccomodation)
        {
            sum = sum+1 ;
        }
 
    }
    //cout << sum <<endl;
    printf("%d\n",sum);
    return 0;
}