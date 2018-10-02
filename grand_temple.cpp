#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    int y[n];
    for (int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    sort(x,x+n);
    sort(y,y+n);

    int dx=INT_MIN,dy=INT_MIN;
    for(int i=0;i<n-1;i++)
    {

        int ans=x[i+1]-x[i]-1;
        if (ans>dx)
            dx=ans;

        int ansy=y[i+1]-y[i]-1;
        if(ansy>dy)
            dy=ansy;
    }
    cout<<(dx*dy)<<endl;
}
