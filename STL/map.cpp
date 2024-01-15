#include<bits/stdc++.h>
using namespace std;


int main(){
    map<int,int>mp;
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        mp[a]=b;
    }
    for(auto&i:mp){
        cout<<i.first<<":"<<i.second<<endl;
    }

}