#include<bits/stdc++.h>
using namespace std;

bool search_element(int a[],int size,int ele){
    
    for(int i=0;i<size;i++){
        if(ele==a[i]){
            return true;
        }
    }
    return false;
}


int main(){
    int n,ele;
    bool p=false;
    cout<<"Enter the size of the array and the target element to be search ";
    cin>>n>>ele;
    int a[n];
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    p=search_element(a,size,ele);
    if(p==true){
        cout<<"Element is found "<<endl;
    }
    else{
        cout<<"Element is not found "<<endl;
    }
    
}