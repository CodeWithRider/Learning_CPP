#include<bits/stdc++.h>
#include<deque>
using namespace std;


int main(){
    int n,a=0;
    cin>>n>>a;
    deque<int>d(n);
    for(int i=0;i<n;i++){
        cin>>a;
        d.push_front(a);    
    }
    for(int i:d){
        cout<<i<<" ";
    }
}

