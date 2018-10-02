#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool canread(ll *a,int n,int m,int x)
{
    int j=0;
    for (int i=0;i<m;i++)
    {
        ll s=0;
        while(s<=x)
        {
            s=s+a[j];
            j++;
        }
        j--;

    }
    if(j==n)
    {
        return true;
    }
    else
        return false;
}
int binarysearch(ll *a,int n,int m)
{
    ll s=0,e=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>s)
        s=a[i];
    }

    for (int i=0;i<n;i++)
    {
        e=e+a[i];
    }

    ll mid;
    ll ans=0;
    while(s<=e)
    {
        mid=(s+e)/2;
        if (canread(a,n,m,mid)==true)
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

    }
    return ans;
}
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        int n,m;
        cin>>n>>m;

        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans;
        ans=binarysearch(a,n,m);
        cout<<ans<<endl;

}
