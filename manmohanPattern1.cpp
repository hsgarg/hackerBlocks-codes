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
        cout<<"1";
        int j=2;
        for(j=2;j<i;j++){
            if(i%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<"1"<<endl;;
    }
    return 0;


    }
