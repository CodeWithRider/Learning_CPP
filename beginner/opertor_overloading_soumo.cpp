#include<bits/stdc++.h>
using namespace std;

class math{
    public:
    int num;
    math(int num){
       this->num=num;
    }
    void print(){
        cout<<"Number"<<num<<endl;
    }
    //operator overloading 
    bool operator == (math& n2){
        return (this->num==n2.num);
    }
};

int main(){
    math n1(120);
    math n2(120);
    if(n1==n2){
        cout<<"They are equal";
    }
    else{
      cout<<"They are not equal";
    }
    return 0;
}