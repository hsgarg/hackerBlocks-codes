#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool canget(ll n,ll m,ll x,ll y,ll N)
{
    if (n*x <=(m+(N-n)*y))
        return true;
    else
        return false;

}
ll binarysearch(ll N,ll M,ll X,ll Y)
{
    ll s=0;
    ll e=N;
    ll mid;
    ll ans;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(canget(mid,M,X,Y,N)==true)
        {
            ans=mid;

            s=mid+1;
        }
        else if(canget(mid,M,X,Y,N)==false)
        {

            e=mid-1;
        }

    }
    return ans;
}
int main()
{
    ll N,M,X,Y;
    cin>>N>>M>>X>>Y;
    ll ans;
    ans=binarysearch(N,M,X,Y);
    cout<<ans;
    return 0;
}
