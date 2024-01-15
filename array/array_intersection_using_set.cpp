#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
    int a[]={1,2,3,4,4};
    int b[]={2,3,4,5};
    for(int i=0;i<5;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<4;i++){
        if(st.find(b[i])!=st.end()){
            cout<<b[i];
        }
    }
}