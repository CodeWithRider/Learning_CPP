#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1;
    getline(cin,s1);
    int count=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]==' '){
            count++;
        }
    }
    cout<<count+1;
    return 0;
}
