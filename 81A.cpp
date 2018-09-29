#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans = "";
    for(long i=0; i<s.size(); i++)
        if(ans.empty() || ans.back()!=s[i])
            ans+=s[i];
        else
            ans.pop_back();
    cout<<ans<<endl;
    return 0;
}