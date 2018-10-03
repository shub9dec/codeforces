#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<lli>a,v;
lli b[100000];
int main()
{
  _
  lli n,x;
  cin>>n;
  for(lli i=0;i<n;i++)
  {
    cin>>x;
    a.push_back(x);
  }
  b[0]=a[0];
  for(lli i=1;i<n;i++)
    b[i]=a[i]-a[i-1];
  for(lli i=0;i<n;i++)
  {
    if(b[i]>0)
    {
      if(v.size()==0)
        v.push_back(1);
      if(v[v.size()-1]!=1)
        v.push_back(1);
    }
    else if(b[i]==0)
    {
      if(v.size()==0)
        v.push_back(0);
      if(v[v.size()-1]!=0)
        v.push_back(0);
    }
    else
    {
      if(v.size()==0)
        v.push_back(-1);
      if(v[v.size()-1]!=-1)
        v.push_back(-1);
    }
  }
  if(v.size()==1)
    cout<<"YES";
  else if(v.size()==2)
  {
    if(v[0]==0 && v[1]==-1)
      cout<<"YES";
    else if(v[0]==1 && v[1]==0)
      cout<<"YES";
    else if(v[0]==1 and v[1]==-1)
      cout<<"YES";
    else
      cout<<"NO";
  }
  else if(v.size()==3)
  {
    if(v[0]==1 && v[1]==0 && v[2]==-1)
      cout<<"YES";
    else
      cout<<"NO";
  }
  else
    cout<<"NO";
  cout<<endl;
  return 0;
}