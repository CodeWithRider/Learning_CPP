#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::toupper);
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;

}