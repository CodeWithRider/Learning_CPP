#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string temp=s;
    int i=0;
    int j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    if(temp==s){
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
    return 0;
}