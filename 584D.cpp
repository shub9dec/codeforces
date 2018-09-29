#include <bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    if(n==0 || n==1)
        return false;
    for(long long i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long n;
    cin>>n;
    if(prime(n))
    {
        cout<<1<<endl;
        cout<<n<<endl;
        return 0;
    }
    if(prime(n-2))
    {
        cout<<2<<endl;
        cout<<2<<" "<<n-2<<endl;
        return 0;
    }
    for(long long i=2; i<n-3; i++)
    {
        if(prime(i) && prime(n-3-i))
        {
            cout<<3<<endl;
            cout<<3<<" "<<i<<" "<<n-3-i<<endl;
            break;
        }
    }
    return 0;
}