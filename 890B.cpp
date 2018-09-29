#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0; i<n; i++)
        cin>>a[i];
    long arr[200001];
    for(long i=0; i<200001; i++)
        arr[i]=-1;
    long k=0;
    for(long i=0; i<n; i++)
    {
        k++;
        arr[a[i]]=k;
    }
    long mini,index;
    for(long i=0; i<200001; i++)
    {
        if(arr[i]!=-1)
        {
            mini = arr[i];
            index = i;
            break;
        }
    }
    for(long i=0; i<200001; i++)
    {
        if(mini>arr[i] && arr[i]!=-1)
        {
            index = i;
            mini = arr[i];
        }
    }
    cout<<index<<endl;
    return 0;
}