#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int size){
    int temp=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
void print(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    bubble_sort(a,size);
    print(a,size);
    return 0;
}