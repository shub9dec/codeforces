#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int r=0; r<t; r++)
    {
        int n,p;
        cin>>n>>p;
        int cnt = 0;
        bool val = false;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                cout<<i<<" "<<j<<endl;
                cnt++;
                if(cnt==2*n+p)
                {
                    val = true;
                    break;
                }
            }
            if(val)
                break;
        }
    }
    return 0;
}