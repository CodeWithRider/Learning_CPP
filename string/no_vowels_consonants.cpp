#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1;
    getline(cin,s1);
    int c=0,d=0;
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    for(int i=0;i<s1.length();i++){
         if((s1[i]=='A')||(s1[i]=='E')||(s1[i]=='I')||(s1[i]=='O')||(s1[i]=='U')){
            c++;
         }
         else if(s1[i]==' '){
            continue;
         }
         else{
            d++;
         }
    }
    cout<<c<<" "<<d;

    return 0;
}