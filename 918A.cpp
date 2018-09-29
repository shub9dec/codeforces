#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    _
    int n;
    cin>>n;
    vector<int>fib;
    int t1 = 1, t2 = 1, nextTerm = 0;
    fib.push_back(1);
    fib.push_back(1);
    nextTerm = t1 + t2;
    while(nextTerm <= n)
    {
        fib.push_back(nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    for(int i=1; i<=n; i++)
    {
        if(std::find(fib.begin(), fib.end(), i) != fib.end())
            cout<<'O';
        else
            cout<<'o';
    }
    return 0;
}