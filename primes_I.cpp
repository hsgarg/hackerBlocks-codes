#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool v[100000005];
vector<int> prime;
void seive()
{
    for(ll i=2;i<100000005;i+=2)
    {
       v[i]=true;
    }
       prime.push_back(2);
    for(ll i=3;i<100000005;i+=2)
    {
        if(!v[i])
        {
            prime.push_back(i);
            for(ll j=i;(j*i)<100000005;j+=2)
            {
                if(!v[j*i])
                    v[j*i]=true;
            }
        }
    }
}
int main()
{
   int n;
   cin>>n;
   seive();
   cout<<prime[n-1]<<endl;
   return 0;

}
