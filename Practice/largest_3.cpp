#include<bits/stdc++.h>
using namespace std;

int main(){
   int a,b,c;
   cin>>a>>b>>c;
   if((a>b)&&(a>c)){
    cout<<"The largest number is "<<a<<endl;
   }
   else if((a<b)&&(c<b)){
    cout<<"The largest number is "<<b<<endl;
   }
   else{
    cout<<"The largest number is "<<c<<endl;
   }
   return 0;
}