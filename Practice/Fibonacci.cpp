#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t1,t2,t3;
    t1=1;
    t2=1;
    cout<<t1<<t2;
    for(int i=0;i<n;i++){
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    return 0;
}