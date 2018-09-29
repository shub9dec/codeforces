#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long ans=0;
    // vector<int>vec;
    cin>>n;
    long qual[n];
    long cost[n+1];
    for(int i=1; i<n+1; i++)
        cost[i]=1000001;
    for(int i=0; i<n; i++)
        cin>>qual[i];
    long m;
    cin>>m;
    long arr[m][3];
    for(long i=0; i<m; i++)
    {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        if(arr[i][2]<cost[arr[i][1]])
            cost[arr[i][1]] = arr[i][2];
    }
    // for(long i=0; i<m; i++)
    //     vec.push_back(arr[i][1]);
    // set<int>s(vec.begin(), vec.end());
    // if(s.size()!=n-1)
    //     cout<<-1<<endl;
    int cnt =0;
    for(int i=1; i<n+1; i++)
    {
        if(cost[i]==1000001)
            cnt++;
        if(cost[i]<1000001)
            ans+=cost[i];
    }
    if(cnt>1)
        cout<<-1;
    else
        cout<<ans;
    cout<<endl;
    return 0;
}