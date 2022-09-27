#include<stdio.h>
int main(){
    int n,x,i,j,k,pos;
       
    
 
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
       scanf("%d",&x);
 
        int y[x];
        
 
        for(j=0;j<x;j++)
        {
            scanf("%d",&y[j]);
 
             
            if(j==0)
            {
                 k=y[j];
                 pos=j+1;
 
 
            }
  
            if(k>y[j]) 
            {
                k=y[j];
                pos=j+1;
            }                   
        }
            if(x%2!=0)
 
            {
                printf("Mike\n");
            }
            else
            {
                    //printf("%d",pos);
                    if(pos%2!=0)
                    {
                        printf("Joe\n");
                    }
                    else
                    {
                        printf("Mike\n");
                    }
            }
    }
 
    return 0;
 
}