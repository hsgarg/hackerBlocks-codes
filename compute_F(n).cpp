#include<iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {ll n;
    cin>>n;
    if (n%2==0)
    cout<<n/2<<endl;
    else
    cout<<((n-1)/2)-n<<endl;}
	return 0;
}
