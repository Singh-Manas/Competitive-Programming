#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll ans=0;
	    map<ll,pair<ll,ll>> mp;
	    mp[0]={1,0};
	    int n;
	    cin>>n;
	    ll temp;
	    ll xorsum=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>temp;
	        xorsum^=temp;
	        if(mp.find(xorsum)!=mp.end())
	        {
	            auto it=mp.find(xorsum);
	            pair<ll,ll> p=it->second;
	            ans+=i*p.first-p.first-p.second;
	            p.first++;
	            p.second+=i;
	            mp[xorsum]=p;
	        }
	        else
	            mp[xorsum]={1,i};
	    }
	    cout<<ans<<endl;
	}
}
