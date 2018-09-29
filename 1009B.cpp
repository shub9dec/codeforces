#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans = "";
    long idx = s.size()+1;
    for(long i=0; i<s.size(); i++)
    {
        if(s[i]=='2')
        {
            idx = i;
            break;
        }
    }
    long cnt1=0,cnt0=0;
    for(long i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            cnt1++;
        }
    }
    for(long i=0; i<idx; i++)
    {
        if(i>=s.size())
            break;
        if(s[i]=='0')
            cnt0++;
    }
    for(long i=0; i<cnt0; i++)
    {
        ans+='0';
    }
    for(long i=0; i<cnt1; i++)
    {
        ans+='1';
    }
    for(long i=idx; i<s.size(); i++)
    {
        if(s[i]!='1')
            ans+=s[i];
    }
    cout<<ans<<endl;
    return 0;
}