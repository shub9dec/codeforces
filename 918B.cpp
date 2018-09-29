#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    _
    int n,m;
    cin>>n>>m;
    vector<pair<string, string> >vec1;
    vector<pair<string, string> >vec2;
    for(int i=0; i<n; i++)
    {
        string a,b;
        cin>>a>>b;
        vec1.push_back(make_pair(a,b));
    }
    // for(int i=0; i<n; i++)
    // {
    //     cout<<vec1[i].first<<" "<<vec1[i].second<<endl;
    // }
    for(int i=0; i<m; i++)
    {
        string a,b;
        cin>>a>>b;
        vec2.push_back(make_pair(a,b));
    }
    // for(int i=0; i<m; i++)
    // {
    //     cout<<vec2[i].first<<" "<<vec2[i].second<<endl;
    // }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            string s1 = vec2[i].second;
            string s2 = vec1[j].second+';';
            if(s1.compare(s2)==0)
            {
                cout<<vec2[i].first<<" "<<vec2[i].second<<" "<< "#"<<vec1[j].first<<endl;
                break;
            }
        }
    }
    return 0;
}