#include<iostream>
using namespace std;
/// SEARCH AN ELEMENT IN A SORTED AND ROTATED array
int searchIn(int a[],int s,int e,int key){
     s=0;
    int mid=(s+e)/2;
    if(s>e){
        return -1;
    }
    if(a[mid]==key){
        return mid;
    }
    if(a[s]<=a[mid]){
            if(key>=a[s]&&key<=a[mid]){
                    return searchIn(a,s,mid-1,key);
                }
        else{ searchIn(a,mid+1,e,key);
        }
    }
    if(key<=a[e]&&key>=a[mid]){
        return searchIn(a,mid+1,e,key);
    }
    else{
        return searchIn(a,s,mid-1,key);
    }
    }

int main(){
    int a[]={7,8,1,2,3,4,5,6};
    int key;
    cin>>key;
    cout<<searchIn(a,0,7,key);

    return 0;
    }
