#include<bits/stdc++.h>
using namespace std;


int main(){
    string s,rev_str="";
    getline(cin,s);
    string s1=s;
    int j=0;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    for(int i=s.length()-1;i>=0;i--){
          rev_str+=s[i];
    }
    //cout<<s1;
    //cout<<rev_str;
   if(s1==rev_str){
        cout<<"It is palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;

}

