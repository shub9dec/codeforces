#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
const int N = 1000010;
int arr[N], arr1[N];
int n,l;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
        }
        sort(arr,arr+n);
        l=0;
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]==arr[j+1])
            {
                arr1[l] = arr[j];
                l++;
                j++;
            }
        }
        int x = arr1[0], y = arr1[1];
        lli psq = (x+y)*lli(x+y);
        lli s = x*lli(y);
        for(int j=1; j<l-1; j++)
        {
            lli psq1 = (arr1[j]+arr1[j+1])* lli(arr1[j]+arr1[j+1]);
            lli s1 = arr1[j]*lli(arr1[j+1]);
            if(psq1*s<psq*s1)
            {
                psq = psq1;
                s = s1;
                x = arr1[j];
                y = arr1[j+1];
            } 
        }
        printf("%d %d %d %d\n", x, x, y, y);
        // cout<<x<<" "<<x<<" "<<y<<" "<<y<<endl;
    }
    return 0;
}