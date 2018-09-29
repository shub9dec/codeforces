#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cin>>s>>k;
    for(long long i=0; i<s.length()-1; i++)
    {
        long long max = i;
        for(long long j=i+1; j<=i+k && j<s.length(); j++)
            if(s[j]>s[max])
                max = j;
        k-=(max-i);
        s.insert(i,1,s[max]);
        s.erase(s.begin()+max+1);
        if(k<=0)
            break;
    }
    cout<<s<<endl;
    return 0;
}