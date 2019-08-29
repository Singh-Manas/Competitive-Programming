#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
	int n;
	cin>>n;
	string source="";
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    source+=('0'+x);
	}
	string dest=source;
	sort(dest.begin(),dest.end());
	queue<string>q;
	q.push(source);
	map<string,int> m;
	m[source]=0;
	while(!q.empty())
	{
	    string next=q.front();
	    q.pop();
	    if(next==dest)
	    {
	        cout<<m[next]<<endl;
	        break;
	    }
	    for(int i=2;i<n+1;i++)
	    {
	        string p=next;
	        reverse(p.begin(),p.begin()+i);
	        if(m.find(p)==m.end())
	        {
	            m[p]=m[next]+1;
	            q.push(p);
	        }
	    }
	}
}