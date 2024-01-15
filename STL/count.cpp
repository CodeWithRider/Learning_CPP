#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    cout<<"Enter the number to be count";
    int n;
    cin>>n;
    cout<<count(v.begin(),v.end(),n);
    return 0;
}