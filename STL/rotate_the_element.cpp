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
    int tempo=v[0];
    auto it=v.begin();
    v.erase(it);
    v.push_back(tempo);
    for(int i:v){
        cout<<i;
    }
    return 0;
}
    