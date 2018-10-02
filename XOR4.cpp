#include<bits/stdc++.h>
#define ll long long
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
    if (n>=130)
       {
           cout<<"YES"<<endl;
           return 0;
       }
    ll ans;
    int flag=0;
    for (int i=0;i<n-3;i++)
    {

        for (int j=i+1;j<n-2;j++)
        {
           for(int k=j+1;k<n-1;k++)
           {
               for(int t=k+1;t<n;t++)
               {
                   ans=a[i]^a[j]^a[k]^a[t];
                   if (ans==0)
                   flag=1;
               }
           }

    }}

    if (flag==0)
        cout<<"NO"<<endl;
    else if(flag==1)
        cout<<"YES"<<endl;
    return 0;

}
