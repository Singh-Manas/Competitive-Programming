#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    int max_sum=0;
	    for(int i=0;i<n/2;i++)
	    {
	        max_sum+=2*a[n-i-1];
	        max_sum-=2*a[i];
	    }
	    cout<<max_sum<<endl;
	}
	return 0;
}
