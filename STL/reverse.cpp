#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>a;
       v.push_back(a);
    }
    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<endl;
    }
}