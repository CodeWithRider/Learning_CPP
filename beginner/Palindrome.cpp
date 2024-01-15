#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num=0,rem;
    cin>>n;
    int store=n;
    while(n!=0){
    rem=n%10;
    num=(10*num)+rem;
    n/=10;
    }
    if(num==store){
        cout<<"It is a palindrome number";
    }
    else{
        cout<<"It is not a palindrome number";
    }
    return 0;
}