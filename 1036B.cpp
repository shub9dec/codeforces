#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        if(k<max(x,y))
            cout<<-1;
        else
        {
            if(x%2!=y%2)
                k--;
            else if(max(x,y)%2!=k%2)
                k-=2;
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}