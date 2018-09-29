#include<bits/stdc++.h>
using namespace std;
bool sorting(pair<long long, long long>a, pair<long long, long long>b)
{
    if(a.first!=b.first)
        return a.first<b.first;
    else
        return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<long long, long long> >vec;
    long long ans;
    for(int i=0; i<n; i++)
    {
        long long a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(), vec.end(), sorting);
    ans = vec[0].second;
    for(int i=1; i<n; i++)
    {
        if(ans<=vec[i].second)
            ans = vec[i].second;
        else
            ans = vec[i].first;
    }
    cout<<ans<<endl;
    return 0;
}