#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d=1;
    while(d<=2){
    int temp=a[0];
    for(int i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    d++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }

}