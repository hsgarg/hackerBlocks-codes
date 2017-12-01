#include<iostream>
using namespace std;
///PRINT FIBONACCI NUMBERS TILL N
int main(){
    int n;
    cin>>n;
    int a=0,b=1,c=a+b;
    cout<<"0"<<endl<<"1"<<endl;
    while(c<=n){
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
    }

    return 0;
    }
