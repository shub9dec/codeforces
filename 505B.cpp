#include<bits/stdc++.h>
using namespace std;
vector<vector<vector<int> > > vec(101, vector<vector<int> >(101));
bool visit[101]={false};
void dfs(int i, bool arr[], int u)
{
    for(int j=0; j<vec[i][u].size(); j++)
        if(!arr[vec[i][u][j]])
        {
            arr[vec[i][u][j]]=true;
            dfs(i, arr, vec[i][u][j]);
        }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vec[c][a].push_back(b);
        vec[c][b].push_back(a);
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int u,v;
        cin>>u>>v;
        int ans=0;
        for(int j=0; j<vec.size(); j++)
        {
            bool visit[101]={false};
            visit[u]=true;
            if(vec[j].size()==0)
                continue;
            dfs(j,visit,u);
            if(visit[v])
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}