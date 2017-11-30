#include<iostream>
using namespace std;
//largest of 5
int main(){
    int n=5;
    int no;
    int l= -100;
    for(int i=1;i<=5;i++){
        cin>>no;
        if(no>=l){
            l=no;
        }

    }
    cout<<l;
    return 0;
}




