#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=(1.0/i);
        }
        cout<<fixed;
        cout<<setprecision(2);
        cout<<(n*sum)<<endl;
    }

	return 0;
}
