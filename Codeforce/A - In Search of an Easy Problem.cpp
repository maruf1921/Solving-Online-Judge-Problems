#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int numberOfPeople,opinions,i,sum = 0;
 
    //cin >> room ;
    scanf("%d",&numberOfPeople);
 
    for(i=1;i<=numberOfPeople;i++)
    {
       // cin >> numberOfPeople >> numberOfAccomodation ;
        scanf("%d",&opinions);
 
        if(opinions)
        {
            sum = sum+1 ;
        }
 
    }
    //cout << sum <<endl;
    if(sum==0)
        printf("EASY\n");
    else
        printf("HARD\n");
    return 0;
}