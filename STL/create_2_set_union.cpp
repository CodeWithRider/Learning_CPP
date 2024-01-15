#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n,a;
    cout<<"Enter the size of the set1 "<<endl;
    cin>>n;
    set<int>st1;
    set<int>st2;
    cout<<"Enter the elements in set1 ";
    for(int i=0;i<n;i++){
        cin>>a;
        st1.insert(a);
    }
    cout<<"Enter the size of the set2 "<<endl;
    int m,b;
    cin>>m;
    cout<<"Enter the elements in set2 "<<endl;
    for(int j=0;j<m;j++){
        cin>>b;
        st2.insert(b);
    }
    cout<<"Printing the elements of both the sets ";
    for(int i:st1){
        cout<<i;
    }
    for(int j:st2){
        cout<<j;
    }
    return 0;
}