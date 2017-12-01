#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=1,c=a+b;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a=b;
            b=c;
            c=a+b;
        }
        cout<<endl;
    }

    return 0;
    }
