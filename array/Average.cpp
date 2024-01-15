#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    float avg;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
      sum+=a[i];
      avg=sum/n;
    }
    cout<<sum;
    cout<<"The average is "<<avg;
}