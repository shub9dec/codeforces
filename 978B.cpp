#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,cnt=0,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='x')
        {
            cnt++;
        }
        else
            cnt=0;
        if(cnt>2)
        {
            ans+=cnt-2;
            cnt=2;
        }
    }
    cout<<ans<<endl;
    return 0;
}