#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c[n],a[m];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    int j=0,ans=0;
    for(int i=0; i<n; i++)
    {
        if(c[i]<=a[j])
        {
            ans++;
            j++;
        }
        if(j==m)
        {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}