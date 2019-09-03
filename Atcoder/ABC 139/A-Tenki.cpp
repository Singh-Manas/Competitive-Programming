#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    string s,r;
    cin>>s>>r;
    int c=0;
    for(int i=0;i<3;i++)
    {
        if(s[i]==r[i])
            c++;
    }
    cout<<c<<endl;
}
