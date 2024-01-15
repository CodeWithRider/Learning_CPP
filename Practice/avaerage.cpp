#include<bits/stdc++.h>
using namespace std;

int main(){
    int  a[5];
    int sum=0;
    float avg;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        sum+=a[i];
        avg=sum/10;
    }
    cout<<avg;
}