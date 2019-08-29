#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> adj[100001];
bool visited[100001];
void dfs(int s)
{
    visited[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {
        if(!visited[adj[s][i]])
            dfs(adj[s][i]);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    for(int i=1;i<=n;i++)
        visited[i]=false;
    int head;
    cin>>head;
    dfs(head);
    int unreach=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
            unreach++;
    }
    cout<<unreach<<endl;
}
