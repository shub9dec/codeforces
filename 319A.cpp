#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long a;
    if(s[s.length()-1]=='0')
        a=0;
    else
        a=1;
    reverse(s.begin(), s.end());
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]=='0')
            a = (a*2);
        else
            a = (2*a+(long long)pow(2,2*i));
    }
    cout<<a%1000000007<<endl;
    return 0;
}