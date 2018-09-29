#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int a[n],b[n],c[1001]={0};
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        c[b[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        c[b[i]]--;
        if(c[a[i]]==0)
            ans++;
        c[b[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}