#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++)
        cin>>h[i];
    int curr=0,max=0;
    for(int i=1;i<n;i++)
    {
        if(h[i]>h[i-1])
            curr=0;
        else
            curr++;
        if(curr>max)
            max=curr;
    }
    // if(max==INT_MIN)
    //     max=0;
    cout<<max<<endl;
}
