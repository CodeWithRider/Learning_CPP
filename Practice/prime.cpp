#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"It is prime number"<<endl;
    }
    else{
        cout<<"Not a prime number";
    }
    return 0;
}