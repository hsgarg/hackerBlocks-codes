#include<bits/stdc++.h>
using namespace std;
int binarysearch1(int n,int*a,int l)
{
    int s=0;
    int e=l;

    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==n)
            {ans=mid;
             e=mid-1;}
        else if(a[mid]>n)
        {
            e=mid-1;
        }
        else
            s=mid+1;

    }
    return ans;
}
int binarysearch2(int n,int*a,int l)
{
    int s=0;
    int e=l;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==n)
            {ans=mid;
             s=mid+1;}
        else if(a[mid]>n)
        {
            e=mid-1;
        }
        else
            s=mid+1;

    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int lb,ub;
        lb=binarysearch1(x,a,n);
        ub=binarysearch2(x,a,n);
        cout<<lb<<" "<<ub<<endl;
    }
    return 0;
}
