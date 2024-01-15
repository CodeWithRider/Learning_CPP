#include<bits/stdc++.h>
using namespace std;

int main(){
    list<string>l;
    int n;
    string a;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a;
      l.push_back(a);
    }
    for(string i:l){
        cout<<i<<endl;
    }
    return 0;

}