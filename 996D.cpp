#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli n,x,ans=0;
    cin>>n;
    lli p=2*n;
    vector<lli>v;
    for(lli i=0;i<2*n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(lli i=0;i<p-1;i++){
        for(lli j=i+1;j<p;j++){
            if(v[j]==v[i]){
                ans+=j-i-1;
                lli z=v[j];
                v.insert(v.begin()+i+1,z);
                v.erase(v.begin()+j+1);
                break;
            }
        }
    }
    cout<<ans<<endl;
}