#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s1;
    set<int>s2;
    set<int>s3;

    int n,a;
    cout<<"Enter the size of the set1 "<<endl;
    cin>>n;
    cout<<"Enter the elements in set1 ";
    for(int i=0;i<n;i++){
        cin>>a;
        s1.insert(a);
    }
    cout<<"Enter the size of the set2 "<<endl;
    int m,b;
    cin>>m;
    cout<<"Enter the elements in set2 "<<endl;
    for(int j=0;j<m;j++){
        cin>>b;
        s2.insert(b);
    }
    for(auto ele:s1){
        if(s2.find(ele)!=s2.end()){
            cout<<ele<<" ";
        }
    }
    return 0;
}