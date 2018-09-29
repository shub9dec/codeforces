#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long NoOfb=0, steps=0;
    for(long long i=s.length()-1; i>=0; i--)
        if(s[i]=='b')
            NoOfb++;
        else
        {
            steps+=NoOfb;
            NoOfb*=2;
            steps%=1000000007;
            NoOfb%=1000000007;
        }
    cout<<steps<<endl;
    return 0;
}