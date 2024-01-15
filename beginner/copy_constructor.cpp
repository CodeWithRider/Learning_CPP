#include<bits/stdc++.h>
using namespace std;

class shallow{
    int * numptr = new int;//this memory address is common for shallow copy
    public:
    shallow(int num){
        *numptr=num;
    }
    void print(){
        cout<<"Number: "<<*numptr<<endl;
    }
    void setNumber(int num){
        *numPtr = num;
    }
};

int main(){
    Shallow obj1(123);
    obj1.print();
    Shallow obj2(obj1);
    obj2.print();
    obj2.setNumber(12345);//changing the value of number in object2
    obj2.print();//It will print 12345
    obj1.print();//it should print 123 but it will print 12345 because in the shallow copy the refrence
    //variable share the common memory for that reason object1's value also
    //get replaced by 12345
    //return 0;
}