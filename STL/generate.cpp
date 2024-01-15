#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v(10);
    generate(v.begin(),v.end(),rand);
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}