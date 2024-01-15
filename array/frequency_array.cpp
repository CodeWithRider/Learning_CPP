#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,1,2,2,3,3};
    int max=0;
    for(int i=0;i<6;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int freq[max+1]={0};
    for(int i=0;i<6;i++){
        freq[a[i]]=freq[a[i]]+1;
    }
    for(int i=0;i<max+1;i++){
        if(freq[i]!=0){
            cout<<i<<" "<<freq[i]<<endl;
        }
    }
    return 0;
}