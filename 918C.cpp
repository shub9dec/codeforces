#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int>vec;
int n;
string s;
int sol(int x)
{
    vec.clear();
    int in=0,out=0;
    for(int i=x; i<n; i++)
    {
        if(s[i]=='(')
        {
            vec.push_back(1);
        }
        else if(s[i]=='?')
        {
            if(vec.empty())
            {
                vec.push_back(1);
            }
            else
            {
                vec.pop_back();
                in++;
            }
        }
        else
        {
            if(vec.empty())
            {
                if(in>0)
                {
                    in--;
                    vec.push_back(1);
                }
                else
                {
                    return out;
                }
            }
            else
            {
                vec.pop_back();
            }
        }
        if(vec.empty())
        {
            out++;
        }
    }
    return out;
}
int main()
{
    _
    cin>>s;
    n = s.length();
    long ans=0;
    for(int i=0; i<n; i++)
    {
        ans+=sol(i);
    }
    cout<<ans<<endl;
    return 0;
}