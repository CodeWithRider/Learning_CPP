#include<bits/stdc++.h>
using namespace std;

class student{
    int *numptr=new int;
    public:
    student(int id){
        *numptr=id;
    }
    void display(){
        cout<<*numptr<<endl;
    }
    void setname(int num){
        *numptr=num;
    }
    
};

int main(){
    student s1(123);
    s1.display();
    student s2(s1);
    s2.display();
    s2.setname(1234);
    s1.display();
    s2.display();


}