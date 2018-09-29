#include<bits/stdc++.h>
using namespace std;
bool sorting(pair<int, long long>a, pair<int, long long>b)
{
    if(a.second!=b.second)
        return a.second<b.second;
    else
        return a.first<b.first;
}
int main()
{
    int n,m,t=0;
    cin>>n>>m;
    vector<pair<int, long long> >vec;
    map<int, int>freq;
    for(int i=0; i<n; i++)
    {
        int a;
        long long b;
        cin>>a>>b;
        freq[a]++;
        vec.push_back(make_pair(a,b));
        t = max(t, freq[a]);
    }
    long long ans=0;
    sort(vec.begin(), vec.end(), sorting);
    if(freq[1]>t)
    {
        cout<<0<<endl;
        return 0;
    }
    

}