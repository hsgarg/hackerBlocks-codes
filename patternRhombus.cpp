#include<iostream>
using namespace std;
///HOLLOW RHOMBUS PATTERN
int main(){
     int n;
     cin>>n;
     //first line spaces
     for(int i=1;i<n;i++){
        cout<<" ";
     }
     //first line stars
     for(int i=0;i<n;i++){
        cout<<"*";
     }
     cout<<endl;
     for(int i=1;i<n-1;i++){
        //spaces
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        //stars
        cout<<"*";
        //spaces between stars
        for(int j=1;j<n-1;j++){
            cout<<" ";
        }
        //stars
        cout<<"*"<<endl;
     }
     //last line
     for(int i=0;i<n;i++){
        cout<<"*";
     }
     cout<<endl;



     return 0;
}
