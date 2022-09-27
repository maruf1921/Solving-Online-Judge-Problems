#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t, d=1;
    cin>>t;
    while(t--)
    {
        int arr[3], k, r=1;;
        cin>>arr[0]>>arr[1]>>arr[2]>>k;
        if((arr[0]+arr[1]+arr[2])%3==0)
        {
            sort(arr,arr+3);
            //printf("%d %d %d\n",arr[0],arr[1],arr[2]);
            int av=(arr[0]+arr[1]+arr[2])/3;
            int m;
            if(arr[2]>av) m=arr[2]-av;
            if(arr[1]>av) m=arr[1]-av;
            if(arr[0]>av) m=arr[0]-av;
            if((av-arr[1])%k==0&&(av-arr[0])%k==0) r=1;
            else r=-1;
        }
        else r=-1;
        if(r==-1) printf("Case %d: Fight\n",d);
        else printf("Case %d: Peaceful\n",d);
        d++;
    }

    return 0;
}
