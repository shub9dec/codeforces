#include<bits/stdc++.h>
using namespace std;
bool sorting(pair<long long, long>a, pair<long long, long>b)
{
    if(a.first!=b.first)
        return a.first<b.first;
    else
        return a.second<b.second;
}
int main()
{
    long n;
    cin>>n;
    long long arr[n];
    vector<pair<long long, long> >vec;
    for(long i=0; i<n; i++)
    {
        cin>>arr[i];
        vec.push_back(make_pair(arr[i],i));
    }
    sort(vec.begin(), vec.end(), sorting);
    for(long i=1; i<vec.size(); i++)
    {
        if(vec[i].first<=vec[i-1].first)
        {
            arr[vec[i].second] = vec[i-1].first+1;
            vec[i].first = vec[i-1].first+1;
        }
    }
    for(long i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}