#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (a[j]<=a[i]&& dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
        }

    }
    int maxx=dp[0];
    for (int i=0;i<n;i++)
    {
        if (maxx<dp[i])
            maxx=dp[i];
    }
    cout<<maxx<<endl;
    return 0;
}
