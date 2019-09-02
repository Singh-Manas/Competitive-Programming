#include<bits/stdc++.h>
using namespace std;
int main()
{
	int*a;
	int n;
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int max_sum=INT_MIN;
	// O(n*n) solution
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=i-2;j>=0;j--)
	// 	{
	// 		if(a[i]+a[j]>max_sum)
	// 			max_sum=a[i]+a[j];
	// 	}
	// 	for(int j=i+2;j<n;j++)
	// 	{
	// 		if(a[i]+a[j]>max_sum)
	// 			max_sum=a[i]+a[j];
	// 	}
	// }
	// O(n) solution but with O(n) space
	int*left_max=new int[n];
	int*right_max=new int[n];
	left_max[0]=a[0];
	for(int i=1;i<n;i++)
		left_max[i]=max(left_max[i-1],a[i]);
	right_max[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--)
		right_max[i]=max(right_max[i+1],a[i]);
	for(int i=0;i<n;i++)
	{
		if(i==0 || i==1)
		{
			if(a[i]+right_max[i+2]>max_sum)
				max_sum=a[i]+right_max[i+2];
		}
		else if(i==n-1 || i==n-2)
		{
			if(a[i]+left_max[i-2]>max_sum)
				max_sum=a[i]+left_max[i-2];
		}
		else
		{
			if(a[i]+left_max[i-2]>max_sum)
				max_sum=a[i]+left_max[i-2];
			if(a[i]+right_max[i+2]>max_sum)
				max_sum=a[i]+right_max[i+2];
		}
	}
	cout<<max_sum<<endl;
	delete []a;
}
