#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v(5);
    cout<<"Enter the value "<<endl;
    int val;
    cin>>val;
    fill(v.begin(),v.end(),val);
    for(int i:v){
        cout<<i;
    }
    return 0;
}