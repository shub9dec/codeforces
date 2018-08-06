#include<bits/stdc++.h>
using namespace std;
long ans=1;
long arr[200000];
long color[200000];
vector<long>vec[200000];
void dfs(long a, long b)
{
    long current = 1;
    for(long i=0; i<vec[a].size(); i++)
    {
        if(color[vec[a][i]]==0)
        {
            while(current==color[a] || current==color[b])
                current++;
            color[vec[a][i]] = current;
            ans = max(ans,current);
            dfs(vec[a][i],a);
            current++;
        }
    }
}
int main()
{
    long n;
    cin>>n;
    for(long i=0; i<n; i++)
        color[i]=0;
    for(long i=0; i<n-1; i++)
    {
        long x,y;
        cin>>x>>y;
        vec[x-1].push_back(y-1);
        vec[y-1].push_back(x-1);
    }
    color[0]=1;
    ans=1;
    dfs(0,0);
    cout<<ans<<endl;
    for(long i=0; i<n; i++)
        cout<<color[i]<<" ";
    cout<<endl;
    return 0;
}