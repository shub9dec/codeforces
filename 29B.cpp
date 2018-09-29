#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float l,d,v,g,r;
    cin>>l>>d>>v>>g>>r;
    float ans;
    int q = d/((g+r)*v);
    if((g+r)*v*q<=d && (g+r)*v*q+v*g>d)
        ans = l/v;
    else
        ans = (g+r)*(q+1)-d/v + l/v;
    cout<<setprecision(7)<<ans<<endl;
    return 0;
}
