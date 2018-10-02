#include<bits/stdc++.h>
using namespace std;
bool canmake(int *a,int p,int l,int x)
{
    int mn,k,cnt=0;
    for(int i=0;i<l;i++)
    {
        k=1;
        mn=0;
        while(mn<=x)
        {
            mn+=a[i]*k;
            k++;
            cnt++;

        }
        cnt--;


    }
    if (cnt>=p)
        return true;
    return false;
}
int binarysearch(int *a,int p,int l)
{
    int s=0;
    int e=a[l-1]*(p*(p+1)/2);
    int mid;
    int ans=0;
    while(s<=e)
    {
        mid=(s+e)/2;
        if (canmake(a,p,l,mid)==true)
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
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        int l;
        cin>>l;
        int a[l];
        for(int i=0;i<l;i++)
        {
            cin>>a[i];
        }
        int ans;
        ans=binarysearch(a,p,l);
        cout<<ans<<endl;
    }
}
