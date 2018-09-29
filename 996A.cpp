#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli n;
    cin>>n;
    lli ans=0;
    ans+=n/100;
    n=n%100;
    ans+=n/20;
    n%=20;
    ans+=n/10;
    n%=10;
    ans+=n/5;
    n%=5;
    ans+=n;
    cout<<ans;
}