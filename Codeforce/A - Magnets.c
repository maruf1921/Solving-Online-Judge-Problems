#include<stdio.h>
 
int main()
{
   int i,n,s;
    scanf("%d",&n);
    int x[n];
    s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        
       // printf("%d ",x[i]);
        
        if(x[i-1]!=x[i])
        {
         s = s+1 ;
        }
        
       // printf("%d\n",x[i-1],x[i],s);
    
    }
    printf("%d\n",s);
    return 0;
}