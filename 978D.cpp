#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long long b[n],arr[n];
    for(long i=0; i<n; i++)
        cin>>b[i];
    long ans,mini = n+1;
    bool flag = true;
    if(n<3)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=-1; i<2; i++)
    {
        for(int j=-1; j<2; j++)
        {
            arr[0] = b[0]+i;
            arr[1] = b[1]+j;
            flag = true;
            ans=abs(i)+abs(j);
            for(long k=2; k<n; k++)
            {
                arr[k] = arr[0]+k*(arr[1]-arr[0]);
                if(abs(b[k]-arr[k])>1)
                {
                    flag = false;
                    break;
                }
                if(arr[k]!=b[k])
                    ans++;
            }
            if(flag)
                mini = min(mini, ans);
        }
    }
    if(mini == n+1)
        cout<<-1<<endl;
    else
        cout<<mini<<endl;
    return 0;
}