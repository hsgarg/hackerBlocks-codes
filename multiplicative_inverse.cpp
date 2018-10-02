#include<bits/stdc++.h>

using namespace std;
long long p=1000000007;
long long power(long long n,long long y,long long p)
{
    if(y==0)
        return 1;
    long long ans=power(n,y/2,p)%p;
    ans=(ans*ans)%p;
    return (y%2==0)? ans:(n*ans)%p;
}
int main()
{
    int n;
    cin>>n;
    cout<<power(n,p-2,p)<<endl;
    return 0;
}
