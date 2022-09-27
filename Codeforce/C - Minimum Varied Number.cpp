#include <iostream>
#include <stack>
 
using namespace std;
 
int main()
{
    int i,s,testCase, sum=0, answer,j,k;
    stack <int> st;
    cin>>testCase;
 
    for(i=0; i<testCase; i++)
    {
        cin>>s;
 
        for(j=9; j>0; j--)
        {
            if(sum+j<=s)
            {
              st.push(j);
              sum= sum+j;
            }
        }
        int n = st.size();
        
 
        sum = 0;
        
        for(k=0;k<n;k++)
        {
           cout<<st.top();
           st.pop();
 
        }
        cout<<endl;
 
    }
 
 
    return 0;
}