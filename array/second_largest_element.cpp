#include<bits/stdc++.h>
#include<set>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    priority_queue<int> pt;
    for(int i=0;i<n;i++){
        pt.push(a[i]);
    }
    cout<<pt.top();
    return 0;
}