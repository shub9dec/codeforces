#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    long x,y;
    cin>>a>>x>>y;
    long t = y/a;
    if(y%a==0)
        cout<<-1;
    else if(abs(x)>=a)
        cout<<-1;
    else
        if(t==0)
            if(abs(2*x)<a)
                cout<<1;
            else
                cout<<-1;
        else
            if(t%2==1)
                if(abs(2*x)<a)
                    cout<<t+t/2+1;
                else
                    cout<<-1;
            else
                if(x==0)
                    cout<<-1;
                else
                    if(x<0)
                        cout<<t+t/2;
                    else
                        cout<<t+t/2+1;
    cout<<endl;
    return 0;
}