#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    /*for(int i:st){
        cout<<i<<" ";
    }*/
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
}