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
	    int n,m;
	    cin>>n>>m;
	    ll c[n][m],d[n][m],ans[n][m];
	    for(int i=0;i<n;i++)
	        for(int j=0;j<m;j++)
	            cin>>c[i][j];
	    for(int i=0;i<n;i++)
	        for(int j=0;j<m;j++)
	            cin>>d[i][j];
	    ll cp=LLONG_MAX;
	    for(int i=0;i<m;i++)
	    {
	        ans[0][i]=c[0][i];
	        cp=min(cp,ans[0][i]);
	    }
	    for(int i=1;i<n;i++)
	    {
	        ll cp2=LLONG_MAX;
	        for(int j=0;j<m;j++)
	        {
	            ll cost=max((ll)0,c[i][j]-d[i-1][j]);
	            ans[i][j]=min(ans[i-1][j]+cost,cp+c[i][j]);
	            cp2=min(cp2,ans[i][j]);
	        }
	        cp=cp2;
	    }
	    ll spend=LLONG_MAX;
	    for(int i=0;i<m;i++)
	    {
	        spend=min(spend,ans[n-1][i]);
	    }
	    cout<<spend<<endl;
	}
}
