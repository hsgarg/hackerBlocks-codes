#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //first line
    for(int i=0;i<n;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    //mid upper lines
    for(int i=1;i<=n/2;i++){
        for(int j=0;j<=(n/2)-i;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<(4*i)-1;j++){
            cout<<" ";
        }
         for(int j=0;j<=(n/2)-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //mid bottom lines
    for(int i=1;i<n/2;i++){
            //star
            for(int j=0;j<=i;j++){
                cout<<"*"<<" ";
            }
            for(int j=1;j<(4*((n/2)-i))-1;j++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;



    return 0;
    }
