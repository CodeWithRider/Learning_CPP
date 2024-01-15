#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>s{n};
    int a=0;
    cin>>a;
    for(int i=0;i<n;i++){
        cin>>a;
        s.insert(a);
    }
    for(int i:s){
        cout<<i<<" "<<endl;
    }
}