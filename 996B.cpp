#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli n,ans=1,mini=1e9+1,x,r;
    cin>>n;
    lli a[n];
    for(lli i=1;i<=n;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
    }
    for(lli i=1;i<=n;i++){
        a[i]-=n*(mini/n);
    }
    for(lli i=1;i<=n;i++){
        if(a[i]<i){
            ans=i;
            cout<<ans;
            return 0;
        }
    }
    for(lli i=1;i<=n;i++){
        a[i]-=n;
    }
    for(lli i=1;i<=n;i++){
        if(a[i]<i){
            ans=i;
            cout<<ans;
            return 0;
        }
    }
}