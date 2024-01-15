#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v;
    int sum=0;
    for(int i=1;i<5;i++){
        v.push_back(i);
    }
    for(int i:v){
        sum+=i;
    }
    cout<<sum;
    return 0;
}