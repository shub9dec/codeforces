#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    if((ax-bx)*(by-cy)==(ay-by)*(bx-cx))
    {
        cout<<"No"<<endl;
        return 0;
    }
    if((pow(ax-bx,2)+pow(ay-by,2))==(pow(bx-cx,2)+pow(by-cy,2)))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}