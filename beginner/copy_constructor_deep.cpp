#include<bits/stdc++.h>
using namespace std;

class deep{
    int *numptr= new int; //this memory address is unique for deep copy
    public:
    deep(int num){   //num=1234
       *numptr=num;  //*numptr=1234
    }
    deep(deep& d){
        *numptr=*d.numptr;
    }
    void print(){
        cout<<"Number"<<*numptr<<endl;
    }
    void setnumber(int num){
        *numptr=num;
    }

};
int main(){
    deep obj1(123);
    obj1.print();
    deep obj2(obj1);
    obj2.print();
    obj2.setnumber(12345); //changing the value of number in object2
    obj2.print(); //it will print 12345
    obj1.print(); //it will print 123 because integer pointer is not sharing the memory address
    //in deep copy
    return 0;
}