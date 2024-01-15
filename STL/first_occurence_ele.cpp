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
    cout<<"Enter the first occurence of a value in a vector "<<endl;
    int ele;
    cin>>ele;
    auto it=find(v.begin(),v.end(),ele);
    if(it!=v.end()){
        cout<<"element found at location "<<(it-v.begin());
    }
    else{
        cout<<"element not found ";
    }
    return 0;
}