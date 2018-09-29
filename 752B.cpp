#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    _
    map<char,char>vec;
    vector<pair<char, char> >v;
    int cnt=0;
    string s1,s2;
    cin>>s1>>s2;
    bool visit[26];
    for(int i=0; i<26; i++)
        visit[i] = false;
    for(int i=0; i<s1.length(); i++)
    {
        if(!visit[s1[i]-'a'] && !visit[s2[i]-'a'])
        {
            if(s1[i]!=s2[i])
            {
                vec[s1[i]] = s2[i];
                vec[s2[i]] = s1[i];
                visit[s1[i]-'a'] = true;
                visit[s2[i]-'a'] = true;
                cnt++;
                v.push_back(make_pair(s1[i],s2[i]));
            }
            else
            {
                vec[s1[i]] = s1[i];
                visit[s1[i]-'a'] = true;
            }
        }
        else if(visit[s1[i]-'a'] && visit[s2[i]-'a'])
        {
            if(vec[s1[i]] != s2[i] || vec[s2[i]] != s1[i])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        else if(visit[s1[i]-'a'])
        {
            if(s1[i]!=s2[i])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        else
        {
            if(s1[i]!=s2[i])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=0; i<cnt; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}