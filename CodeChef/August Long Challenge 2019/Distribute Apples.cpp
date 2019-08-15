#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        //unsigned ll a=k*k;
        if(k==1||((n/k)%k==0))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
	return 0;
}

