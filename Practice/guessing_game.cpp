#include<bits/stdc++.h>
using namespace std;

int main(){
    int guess,random;
    srand(time(0));
    random = (rand() % (100-1))+1;
    for(int i=0;i<5;i++){
        cout<<"Enter the number between 0-9:"<<endl;
        cin>>guess;
        if(random==guess){
            cout<<"Sucess";
            break;
        }
        else{
            cout<<"Try again";
        }
    }
    return 0;
}