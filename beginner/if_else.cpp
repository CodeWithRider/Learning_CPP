#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=90&&n<=100){
        cout<<"A";
    }
    else if(n>=80&&n<=89){
        cout<<"B";
    }
    else if(n>=70&&n<=79){
        cout<<"C";
    }
    else if(n>=60&&n<=69){
        cout<<"D";
    }
    else if(n>=50&&n<=59){
        cout<<"E";
    }
    else if(n>=40&&n<=49){
        cout<<"E-";
    }
    else{
        cout<<"F";
    }

}