#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool sorting(pair<int,int> a, pair<int,int> b)
{
    if(a.first!=b.first)
       return (a.first > b.first);
    else
        return (a.second < b.second);
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int, int> >vec;
    int sum;
    for(int i=0; i<n; i++)
    {
        sum=0;
        int a;
        for(int j=0; j<4; j++)
        {
            cin>>a;
            sum+=a;
        }
        vec.push_back(make_pair(sum, i+1));
    }
    sort(vec.begin(), vec.end(), sorting);
    for(int i=0; i<n; i++)
    {
        if(vec[i].second==1)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}