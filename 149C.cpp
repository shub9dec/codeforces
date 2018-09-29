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
    vector<pair<long long, long> >vec;
    for(long i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vec.push_back(make_pair(a,i));
    }
    sort(vec.begin(), vec.end(), sorting);
    if(n%2==1)
        cout<<n/2+1<<endl;
    else
        cout<<n/2<<endl;
    for(long i=0; i<n; i+=2)
        cout<<vec[i].second+1<<" ";
    cout<<endl;
    cout<<n/2<<endl;
    for(long i=1; i<n; i+=2)
        cout<<vec[i].second+1<<" ";
    cout<<endl;
    return 0;
}