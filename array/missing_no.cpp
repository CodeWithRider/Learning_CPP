#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sumtotal=0,sumarray=0;
    int N=n+1;
    sumtotal=N*(N+1)/2;
    for(int i=0;i<n;i++){
       sumarray+=a[i];
    }
    int miss=sumtotal-sumarray;
    cout<<miss;
    return 0;
}