#include <iostream>
 
using namespace std;
 
int main()
{
    long long int testCase,lengthOfSequence,i,j,elementsValue[lengthOfSequence+1];
    cin>>testCase;
    for(i=0;i<testCase;i++)
    {
        cin>>lengthOfSequence;
        long long int elementsValue[lengthOfSequence+1]={},counter[200003]={},l=0;
        for(j=0;j<lengthOfSequence;j++)
        {
            cin>>elementsValue[j];
        }
        for(j=lengthOfSequence-1;j>=0;j--)
        {
            counter[elementsValue[j]]++;
            if(counter[elementsValue[j]]>1) break;
            l++;
           // cout<<elementsValue[j]<<"......"<<counter[elementsValue[j]]<<endl;
        }
        cout<<lengthOfSequence-l<<endl;
    }
 
    return 0;
}