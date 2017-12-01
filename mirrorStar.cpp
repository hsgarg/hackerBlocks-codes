#include<iostream>
using namespace std;
///MIRROR STAR PATTERN
/*
      *
   *  *  *
*  *  *  *  *
   *  *  *
      *

    */

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=(n+1-(2*i));j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=(2*i);j++){
             cout<<" ";
            }
        for(int j=1;j<=n-(2*i);j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;

    }
