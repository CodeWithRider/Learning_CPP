#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        l.push_back(a);
    }
    set<int>st;
    for(auto ele:l){
        st.insert(ele);
    }
    for(int i:st){
        cout<<i;
    }
    return 0;
}