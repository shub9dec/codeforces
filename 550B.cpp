#include<bits/stdc++.h>
using namespace std;
long long sum(vector<long>v)
{
    long x=0;
    return accumulate(v.begin(), v.end(), x);
}
int main()
{
    int n;
    long x,ans=0;
    long long l,r;
    cin>>n>>l>>r>>x;
    long t = pow(2,n);
    vector<long>vec[t];
    long arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(long i=0; i<t; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i & (1<<j))
            {
                vec[i].push_back(arr[j]);
            }
        }
    }
    for(long i=1; i<t; i++)
    {
        bool a = *max_element(vec[i].begin(), vec[i].end())-*min_element(vec[i].begin(), vec[i].end())>=x;
        bool b = l<=sum(vec[i]) && sum(vec[i])<=r;
        if(a && b && vec[i].size()>=2)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}