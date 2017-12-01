#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int no;
    for(int i=1;i<=n;i++){
            cin>>no;
        int sumeven=0;
        int sumodd=0;

for(int k=no;k>0;k=k/10){
        int c=k%10;
        if(c%2==1){
            sumodd=sumodd+c;
        }
        else {
            sumeven=sumeven+c;
        }

    }
        if(sumeven%4==0||sumodd%3==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    }


    return 0;
    }
