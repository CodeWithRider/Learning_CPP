#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string p=s;
    reverse(s.begin(),s.end());
    if(p==s){
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not palindrome";
    }
}