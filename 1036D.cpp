#include<bits/stdc++.h>
using namespace std;
long long sum(long long arr[], int n)
{
    long long s=0;
    for(long i=0; i<n; i++)
        s+=arr[i];
    return s;
}
int main()
{
    int n,m,cnt=0;
    //cin>>n;
    scanf("%d", &n);
    long long a[n];
    // vector<long long>A;
    // vector<long long>B;
    for(int i=0; i<n; i++)
        scanf("%lld", &a[i]);
    scanf("%d", &m);
    long long b[m];
    for(int i=0; i<m; i++)
        scanf("%lld", &b[i]);
    int i=0,j=0;
    if(sum(a,n)!=sum(b,m))
    {
        cout<<-1<<endl;
        return 0;
    }
    while(i<n)
    {
        if(a[i]==b[j])
        {
            // A.push_back(a[i]);
            // B.push_back(b[j]);
            cnt++;
            i++;
            j++;
        }
        else
        {
            long long q=a[i],w=b[j];
            while(q!=w)
            {
                if(q>w)
                {
                    j++;
                    w+=b[j];
                }
                else
                {
                    i++;
                    q+=a[i];
                }
                if(q==w)
                {
                    // A.push_back(q);
                    // B.push_back(w);
                    cnt++;
                    i++;
                    j++;
                }
            }
        }
    }
    // cout<<A.size()<<endl;
    printf("%d\n",cnt);
    return 0;
}