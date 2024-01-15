#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num=0,rem;
    while(n!=0){
    rem=n%10;
    num=(10*num)+rem;
    n/=10;
    }
    cout<<num;
    return 0;
}