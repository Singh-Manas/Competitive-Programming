#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll c[n+1],h[n+1];
	    long long sum=0;
	    for(int i=1;i<=n;i++)
	        cin>>c[i];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>h[i];
	        sum+=h[i];
	    }
	    ll ans[n+1],sumh=0;
	    memset(ans,0,sizeof(ans));
	    for(int i=1;i<=n;i++)
	    {
	        int min=i-c[i];
	        if(min<1)
	            min=1;
	        int max=i+c[i];
	        if(max>n)
	            max=n;
	        sumh+=max-min+1;
	    }
	    //for(int i=1;i<=n;i++)
	        //cout<<ans[i]<<" ";
	    //cout<<endl<<endl;
	    //long long sumh=0;
	    //for(int i=1;i<=n;i++)
	        //sumh+=ans[i];
	    //cout<<sum<<" "<<sumh<<endl;
	    if(sum==sumh)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
