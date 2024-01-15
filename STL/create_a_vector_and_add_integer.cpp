#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i:v){
        cout<<i<<endl;
    }
    //size of vector
    cout<<v.size();
    return 0;
}