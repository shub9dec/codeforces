#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli a[2001], b[2001], arr[2001], k, n, pre[2001];
void solve()
{
    pre[0] = a[0];
    for(int j=1; j<k; j++)
        pre[j] = pre[j-1] + a[j];
    set<lli> s;
    for(int j=0; j<k; j++)
    {
        lli curr = b[0] - pre[j];
        for(int l=0; l<k; l++)
            arr[l] = curr + pre[l];
        int flag = 0;
        map<lli,lli>m;
        for(lli r=0;r<k;r++)
          m[arr[r]]=1;
        for(lli r=0;r<n;r++)
          if(m[b[r]]!=1){
            flag=1;
            break;
          }
        if(!flag)
            s.insert(curr);
    }
    cout<<s.size()<<endl;
    return;
}

int main()
{
    scanf("%lld %lld",&k ,&n);
    for(int j=0; j<k; j++)
        scanf("%lld",&a[j]);
    for(int j=0; j<n; j++)
        scanf("%lld",&b[j]);
    solve();
    return 0;
}