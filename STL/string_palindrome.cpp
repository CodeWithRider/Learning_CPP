#include<bits/stdc++.h>
using namespace std;


int main(){
    string s,rev;
    getline(cin,s);
    rev=s;
    //cout<<rev;
    reverse(s.begin(),s.end());
    if(rev==s){
        cout<<"It is palindrome ";
    }
    else{
        cout<<"It is not palindrome ";
    }
    return 0;
}