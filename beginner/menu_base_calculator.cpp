#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,sum=0,sub=0;
    float mul=0,div=0;

    cout<<"If user choice 1, then addition"<<endl;
    cout<<"If user choice 2, then subtraction"<<endl;
    cout<<"If user press 3, then multiplication "<<endl;
    cout<<"If user press 4, the division "<<endl;
    int n;
    cin>>n;
    cin>>a>>b;
    
    switch(n){
        case 1:
        sum=a+b;
        cout<<sum<<endl;
        break;
        case 2:
        sub=a-b;
        cout<<sub<<endl;
        break;
        case 3:
        mul=a*b;
        cout<<mul<<endl;
        break;
        case 4:
        div=a/b;
        cout<<div<<endl;
        break;
        default:
        cout<<"no choice"<<endl;

    }
    
}