#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> adj[100001];
bool visited[100001];
bool marked[100001];
int ans=INT_MAX;
void dfs(int s)
{
    visited[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {
        if(!visited[adj[s][i]])
        {
            if(marked[adj[s][i]])
            {
                if(adj[s][i]<ans)
                    ans=adj[s][i];
            }
            else
                dfs(adj[s][i]);
        }
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int x,y;
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int q;
    cin>>q;
    int temp;
    for(int i=1;i<=n-1;i++)
        marked[i]=false;
    for(int i=0;i<q;i++)
    {
        cin>>temp;
        marked[temp]=true;
    }
    for(int i=1;i<=n;i++)
        visited[i]=false;
    dfs(1);
    cout<<ans<<endl;
}