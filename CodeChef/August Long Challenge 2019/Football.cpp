#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        long max=0,temp;
        for(int i=0;i<n;i++)
        {
            temp=(a[i]*20)-(b[i]*10);
            //cout<<temp<<endl;
            if(temp>max)
                max=temp;
        }
        cout<<max<<endl;
    }
	return 0;
}
