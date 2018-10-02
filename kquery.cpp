#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int > tree[4*30000];
void buildtree(int *a,int s,int e,int index)
{
    if(s>e)
    {
        return;
    }
    if(s==e)
    {
        tree[index].push_back(a[s]);
        return;
    }
    int mid=(s+e)/2;
    buildtree(a,s,mid,2*index+1);
    buildtree(a,mid+1,e,2*index+2);

    merge(tree[2*index+1].begin(),tree[2*index+1].end(),tree[2*index+2].begin(),tree[2*index+2].end(),back_inserter(tree[index]));

}
int kquery(int i,int j,int k,int index,int s,int e)
{
    if(i>e ||j<s||s>e)
        return 0;
    if(i<=s && j>=e)
        return tree[index].size()-(upper_bound(tree[index].begin(),tree[index].end(),k)-tree[index].begin());
    int mid=(s+e)/2;
    return kquery(i,j,k,2*index+1,s,mid)+kquery(i,j,k,2*index+2,mid+1,e);

}
int main()
{
int n;
cin>>n;
int a[n];
int q;


for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
buildtree(a,0,n-1,0);
cin>>q;


while(q--)
{
    int i,j,k;
    cin>>i>>j>>k;

    cout<<kquery(i-1,j-1,k,0,0,n-1)<<endl;
}
return 0;
}
