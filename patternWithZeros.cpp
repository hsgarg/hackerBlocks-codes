#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i==1){
        cout<<"1"<<endl;
        i++;
    }
   for(i=2;i<=n;i++){
        cout<<i<<" ";
        int j=2;
        for(j=2;j<i;j++){

             cout<<"0"<<" ";

        }
        cout<<i<<endl;;
    }
    return 0;


    }
