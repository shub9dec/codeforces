#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m;
    cin>>n>>m;
    long p = n/m;
    long long arr[n],mod[n];
    for(long i=0; i<n; i++)
    {
        cin>>arr[i];
        mod[i] = arr[i]%m;
    }
    map<long, long>freq;
    vector <long> vec;
    vector<long>v[m];
    long long ans=0;
    for(long i=0 ;i<n; i++)
    {
        freq[mod[i]]++;
        v[mod[i]].push_back(i);
    }
    for(long i=0; i<2*m; i++)
    {
        if(freq[i%m]>p)
        {
            for(long j=0; j<freq[i%m]-p; j++)
            {
                vec.push_back(v[i%m][j]);
            }
            freq[i%m]=p;
        }
        if(freq[i%m]<p)
        {
            while(freq[i%m]<p && !vec.empty())
            {
                ans += i - mod[vec[vec.size()-1]];
                arr[vec[vec.size()-1]] += i - mod[vec[vec.size()-1]];
                freq[i%m]++;
                vec.pop_back();
            }
        }
    }
    cout<<ans<<endl;
    for(long i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}