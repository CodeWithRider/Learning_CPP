#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    string str ="";
    for(char ch: v)
       str+=ch;
       
    cout<<str<<endl;
     return 0;
}