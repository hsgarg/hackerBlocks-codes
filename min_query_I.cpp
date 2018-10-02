#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void construct_tree(int *a,int *segment,int low,int high,int pos)
{
    if(low>high)
    return;
	if(high==low)
	{
	segment[pos]=a[low];
    return;
    }
    int mid=(high+low)/2;
    construct_tree(a,segment,low,mid,2*pos+1);
    construct_tree(a,segment,mid+1,high,2*pos+2);
    segment[pos]=min(segment[2*pos+1],segment[2*pos+2]);
}
void print_tree(int *segment,int k)
{
    cout<<endl;
	for(int i=0;i<k;i++)
	{
	cout<<segment[i]<<" ";
	}
}
int range_min_query(int *segment,int  qs,int  qe,int low,int high,int pos){
	//No Overlap
	if(qs>high || qe<low){
		return INT_MAX;
	}
	else if(low>=qs && high<=qe){
		return segment[pos];
	}
	else{
		int mid = (low+high)/2;
		int left = range_min_query(segment,qs,qe,low,mid,2*pos+1);
		int right = range_min_query(segment,qs,qe,mid+1,high,2*pos+2);
		return min(left,right);
	}
}
void updatenode(int *segment,int low,int high,ll i,ll val,int pos)
{
	if(i<low || i>high)
	return;
	if(low==high)
	{
	segment[pos]=val;
	return;
	}
	else
	{
	int mid=(low+high)/2;
	updatenode(segment,low,mid,i,val,2*pos+1);
	updatenode(segment,mid+1,high,i,val,2*pos+2);
	segment[pos]=min(segment[2*pos+1],segment[2*pos+2]);
	return;
	}
}

int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
	int l=n;
	if(n&1)
	{
    while(l&n)
    {
    l++;
    }
	}
	int k=2*l-1;
	int segment[k];
	construct_tree(a,segment,0,n-1,0);
	//print_tree(segment,k);
	while(q--)
	{
	int num;
    int m,p;
	cin>>num>>m>>p;
	if(num==1)
	{
	cout<<range_min_query(segment,m-1,p-1,0,n-1,0)<<endl;
	}
	else
	{
	updatenode(segment,0,n-1,m-1,p,0);
	}
}
}
