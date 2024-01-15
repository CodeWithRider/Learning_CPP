#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    int n,sum=0;
    cin>>n;
    float avg=0.0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[0]<a[i]){
            a[0]=a[i];
        }
    }
    cout<<"The largest element is "<<a[0]<<endl;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        avg=sum/n;
    }
    cout<<avg;
    return 0;
}