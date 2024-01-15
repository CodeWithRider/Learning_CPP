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
    /*cout<<"Enter the first occurence of a value to be remove in a vector "<<endl;
    int ele;
    cin>>ele;
    auto it=find(v.begin(),v.end(),ele);
    if(it!=v.end()){
        v.erase(it);
    }
    for(int i:v){
        cout<<i;
    }*/
    //remove all the occurence of  element
    cout<<"Enter the element "<<endl;
    vector<int>v1;
    int ele1;
    cin>>ele1;
    for(int i=0;i<n;i++){
       if(v[i]!=ele1){
         v1.push_back(v[i]);
       }
    }
    for(int i:v1){
        cout<<i<<" ";
    }
    
    return 0;
}