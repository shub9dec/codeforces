#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(long i=0; i<n; i++)
        cin>>a[i];
    for(long i=0; i<m; i++)
        cin>>b[i];
    long long pre[n];
    pre[0]=a[0];
    for(long i=1; i<n; i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    long j=0;
    for(long i=0; i<m; i++)
    {
        bool flag = true;
        while(flag && j<n)
        {
            if(b[i]>pre[j] && b[i]<pre[j+1])
            {
                b[i]-=pre[j];
                flag = false;
                cout<<j+2<<" "<<b[i]<<endl;
            }
            if(b[i]>pre[j])
                j++;
            if(b[i]<=pre[j] && flag)
            {
                if(j==0)
                    cout<<j+1<<" "<<b[i]<<endl;
                else
                    cout<<j+1<<" "<<b[i]-pre[j-1]<<endl;
                break;
            }
        }
    }
    return 0;
}