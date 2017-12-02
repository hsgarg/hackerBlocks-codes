
#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    if(n==0){
        return 1;
    }
    return ans;

    }
    int kCr(int k,int r){
        int ans=1;
        ans = fact(k-1)/(fact(r-1)*fact(k-r));
        return ans;
        }

int main(){
    int r;
    cin>>r;
         for(int i=1;i<=r;i++){
        for (int j=0;j<(r-i);j++){
        cout<<" ";
        }


        for(int j=1;j<=i;j++){
            cout<<kCr(i,j)<<" ";
        }
        cout<<endl;
    }



    return 0;
    }
