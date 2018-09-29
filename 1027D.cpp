#include<bits/stdc++.h>
using namespace std;
bool visited[200001];
vector<long> vec[200001];
long p;
long cost[200001],arr[200001];
long dfs(long i, long r)
{
    visited[i] = true;
    vec[r].push_back(i);
    p = i;
    if(!visited[arr[i]])
        dfs(arr[i],r);
    return arr[p];
}
int main()
{
    long n;
    long k=1;
    long long ans=0;
    cin>>n;
    for(long i=1; i<200001; i++)
        visited[i] = false;
    for(long i=1; i<n+1; i++)
        cin>>cost[i];
    for(long i=1; i<n+1; i++)
        cin>>arr[i];
    for(long i=n+1; i<200001; i++)
        cost[i] = 200002;
    for(long i=n+1; i<200001; i++)
        arr[i] = 200002;
    cost[0] = 200002;
    arr[0] = 200002;
    for(long i=1; i<n+1; i++)
    {
        long q=0;
        p=0;
        if(!visited[i])
        {
            q = dfs(i,k);
            vec[k].push_back(q);
            for(long j=0; j<vec[k].size()-1; j++)
            {
                if(vec[k][j]!=q)
                    vec[k][j]=200002;
                else
                    break;
            }
            k++;
        }
    }
    // for(long i=1; i<n+1; i++)
    // {
    //     for(long j=0; j<vec[i].size(); j++)
    //     {
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(long i=1; i<n+1; i++)
    {
        if(!vec[i].empty())
        {
            for(long j=0; j<vec[i].size(); j++)
                if(vec[i][j]!=200002)
                    vec[i][j] = cost[vec[i][j]];
        }
    }
    // for(long i=1; i<n+1; i++)
    // {
    //     for(long j=0; j<vec[i].size(); j++)
    //     {
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(long i=1; i<n+1; i++)
    {
        if(!vec[i].empty() && vec[i][vec[i].size()-2]!=200002)
            ans += *min_element(vec[i].begin(), vec[i].end());
    }
    cout<<ans<<endl;
    return 0;
}
