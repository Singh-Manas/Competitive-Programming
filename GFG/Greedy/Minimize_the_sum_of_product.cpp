#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        cin>>b[i];
	    sort(a,a+n);
	    sort(b,b+n);
	    ll sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=a[i]*b[n-i-1];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
