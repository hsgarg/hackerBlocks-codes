#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int binarysearch(ll n,ll k)
{
    ll s=0;
    ll e=n;
    ll mid;
    int ans;
    while(s<=e)
    {
        mid=(s+e)/2;
        if (pow(mid,k)==n)
            {
            return mid;}
        else if(pow(mid,k)>n)
            e=mid-1;
        else
            {
                ans=mid;
                s=mid+1;}
    }
    return ans;
}
int main()
{

        ll N;
        int K=2;
        cin>>N;
        int ans;
        ans=binarysearch(N,K);
        cout<<ans<<endl;

    return 0;
}
