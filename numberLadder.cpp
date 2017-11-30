#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    int no=1;
    for(i=1;i<=n;i++){
        int j=1;
        for(j=1;j<=i;j++){
            cout<<no<<" ";
            no++;
        }
        cout<<endl;
    }


    return 0;
    }
