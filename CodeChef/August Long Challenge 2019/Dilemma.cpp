#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    int one=0,zero=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	            zero++;
	        else
	            one++;
	    }
	    //if(one==0)
	        //cout<<"NO"<<endl;
	    if(one%2==1)
	        cout<<"WIN"<<endl;
	    else
	        cout<<"LOSE"<<endl;
	}
	return 0;
}
