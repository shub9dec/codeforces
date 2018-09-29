#include<bits/stdc++.h>
using namespace std;
bool meet(double t, long a[], long b[], long n)
{
    double south = a[0]+t*b[0];
    for(long i=1; i<n; i++)
        south = min(south,a[i]+t*b[i]);
    for(long i=0; i<n; i++)
        if(south < a[i]-t*b[i])
            return false;
    return true;
}
int main()
{
    long n;
    cin>>n;
    long x[n],v[n];
    for(long i=0; i<n; i++)
        cin>>x[i];
    for(long i=0; i<n; i++)
        cin>>v[i];
    double left = 0;
    double right = 1000000000;
    while(left<right-0.0000001)
    {
        double mid = (left+right)/2;
        if(meet(mid,x,v,n))
            right = mid;
        else
            left = mid;
    }
    cout.precision(7);
    cout<<fixed<<right<<endl;
    return 0;
}