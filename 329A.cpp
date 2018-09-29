#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr1[n][n],arr2[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>arr1[i][j];
            arr2[j][i] = arr1[i][j];
        }
    bool val1,val2;
    for(int i=0; i<n; i++)
    {
        val1 = true;
        for(int j=0; j<n; j++)
            if(arr1[i][j]=='.')
            {
                val1 = false;
                break;
            }
        if(val1)
            break;
    }
    for(int i=0; i<n; i++)
    {
        val2 = true;
        for(int j=0; j<n; j++)
            if(arr2[i][j]=='.')
            {
                val2 = false;
                break;
            }
        if(val2)
            break;
    }
    if(val1 && val2)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(val1)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr2[i][j]=='.')
                {
                    cout<<j+1<<" "<<i+1<<endl;
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr1[i][j]=='.')
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}