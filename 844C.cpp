#include<bits/stdc++.h>
using namespace std;
map<long long, long>pos1;
map<long, long>pos2;
bool visited[100000];
vector<long> vec[100000];
void dfs(long i, long r)
{
    visited[i] = true;
    vec[r].push_back(i);
    if(!visited[pos2[i]])
        dfs(pos2[i],r);
}
int main()
{
    long n,ans=0;
    cin>>n;
    long long arr[n],arr1[n];
    for(long i=0; i<n; i++)
    {
        cin>>arr[i];
        arr1[i] = arr[i];
        pos1[arr[i]] = i+1;
    }

    // for (map<long long, long>::iterator it=pos1.begin(); it!=pos1.end(); ++it)
    //     cout << it->first << " => " << it->second << '\n';
    // cout<<endl;
    sort(arr1,arr1+n);
    for(long i=0; i<n; i++)
        pos2[pos1[arr1[i]]] = i+1;
    // for (map<long, long>::iterator it=pos2.begin(); it!=pos2.end(); ++it)
    //     cout << it->first << " => " << it->second << '\n';
    for(long i=0; i<n; i++)
        if(!visited[i+1])
        {
            dfs(i+1,ans);
            ans++;
        }
    cout<<ans<<endl;
    for(long i=0; i<ans; i++)
    {
        cout<<vec[i].size()<<" ";
        for(long j=0; j<vec[i].size(); j++)
            cout<<vec[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}