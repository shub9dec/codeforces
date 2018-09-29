#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6];
    int sum=0;
    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag = true;
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            for(int k=j+1; k<6; k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum/2)
                {
                    cout<<"YES"<<endl;
                    flag = false;
                    return 0;
                }
            }
        }
    }
    if(flag)
        cout<<"NO"<<endl;
    return 0;
}