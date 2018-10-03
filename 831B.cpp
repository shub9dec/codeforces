#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
tree< pair<lli,lli>, null_type, less<pair<lli,lli>>, rb_tree_tag, tree_order_statistics_node_update> root;
typedef double rea;
vector<lli>v;
map<char,char>m;
int main(){
  string s1,s2,s3;
  cin>>s1>>s2;
  for(lli i=0;i<s1.length();i++){
    m[s1[i]]=s2[i];
    m[s1[i]-32]=s2[i]-32;
  }
  cin>>s3;
  for(lli i=0;i<s3.length();i++){
    if((int(s3[i])>=65 and int(s3[i])<=90) or (int(s3[i])>=97 and int(s3[i])<=122))
      cout<<m[s3[i]];
    else{
      cout<<s3[i];
    }
  }
}