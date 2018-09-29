#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    _
    long n,m,k;
    cin>>n>>m>>k;
    long r,d;
    if(k%(2*m)==0)
    {
        r = k/(2*m);
    }
    else
    {
        r = k/(2*m)+1;
    }
    d = k-(r-1)*(2*m);
    if(k%2==1)
        d = d/2+1;
    else
        d/=2;
    //d = d/m+1;
    cout<<r<<" "<<d<<" ";
    if(k%2==1)
        cout<<'L';
    else
        cout<<'R';
    cout<<endl;
    return 0;
}