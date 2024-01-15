#include<bits/stdc++.h>
using namespace std;

int main(){
     string s;
     getline(cin,s);
     int length=s.length();
     for(int i=length-1;i>=0;i--){
        cout<<s[i];
     }
     return 0;
}