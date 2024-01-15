#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3,k=0;
    cin>>n1>>n2;
    int a[n1];
    int b[n2];
    n3=n1+n2;
    int c[n3];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
            }
        }

    }
    //for(int i=0;i<n3;i++){
        //cout<<c[i];
    //}
    return 0;
}