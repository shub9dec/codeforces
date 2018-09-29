#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    int k;
    cin>>n>>k;
    if(k>n)
        cout<<-1<<endl;
    else if(n>k && k==1)
        cout<<-1<<endl;
    else if(n==1 && k==1)
        cout<<'a'<<endl;
    else
    {
        for(long i=0; i<(n-k+2)/2; i++)
            cout<<"ab";
        if((n-k+2)%2==1)
            cout<<'a';
        for(long i=0; i<k-2; i++)
            cout<<char(99+i);
        cout<<endl;
    }
    return 0;
}