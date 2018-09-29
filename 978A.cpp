#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<int, int>freq;
    int n;
    cin>>n;
    int arr[n];
    int ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(freq[arr[i]]>1)
        {
            freq[arr[i]]--;
            arr[i]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
            ans++;
    }
    cout<<ans<<endl;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
