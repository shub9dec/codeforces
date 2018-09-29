#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    _
    long n;
    cin>>n;
    string s;
    cin>>s;
    long cnt=0;
    int u=0,l=0,r=0,d=0;
    for(long i=0; i<n-1; i++)
    {
        if(s[i]=='R')
        {
            r=1;
            if(s[i+1]=='L')
            {
                r=0;
                l=1;
                u=0;
                d=0;
                cnt++;
            }
            else if(s[i+1]=='U' && d==1)
            {
                d=0;
                u=1;
                l=0;
                r=0;
                cnt++;
            }
            else if(s[i+1]=='D' && u==1)
            {
                u=0;
                d=1;
                l=0;
                r=0;
                cnt++;
            }
        }
        else if(s[i]=='L')
        {
            l=1;
            if(s[i+1]=='R')
            {
                l=0;
                r=1;
                u=0;
                d=0;
                cnt++;
            }
            else if(s[i+1]=='U' && d==1)
            {
                d=0;
                u=1;
                l=0;
                r=0;
                cnt++;
            }
            else if(s[i+1]=='D' && u==1)
            {
                u=0;
                d=1;
                l=0;
                r=0;
                cnt++;
            }
        }
        else if(s[i]=='U')
        {
            u=1;
            if(s[i+1]=='D')
            {
                u=0;
                d=1;
                l=0;
                r=0;
                cnt++;
            }
            else if(s[i+1]=='L' && r==1)
            {
                r=0;
                l=1;
                u=0;
                d=0;
                cnt++;
            }
            else if(s[i+1]=='R' && l==1)
            {
                l=0;
                r=1;
                u=0;
                d=0;
                cnt++;
            }
        }
        else
        {
            d=1;
            if(s[i+1]=='U')
            {
                d=0;
                u=1;
                l=0;
                r=0;
                cnt++;
            }
            else if(s[i+1]=='L' && r==1)
            {
                r=0;
                l=1;
                u=0;
                d=0;
                cnt++;
            }
            else if(s[i+1]=='R' && l==1)
            {
                l=0;
                r=1;
                u=0;
                d=0;
                cnt++;
            }
        }
    }
    cout<<cnt+1<<endl;
    return 0;
}