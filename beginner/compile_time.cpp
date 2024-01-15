#include<bits/stdc++.h>
using namespace std;

//This is the example of compile polymorphism

class Math{
    public:
    //Method overloading:function name and return type same but parameter must be different
    int sum(int number1,int number2){
        return number1+number2;
    }
    int sum(int number1,int number2, int number3){
        return number1+number2+number3;
    }
};

int main(){
    Math math;
    int result=math.sum(10,20); //it will call the first function and will return 30
    cout<<"Result:"<<result<<endl;
    result=math.sum(10,20,30); //it will call the second sum function and will return 60
    cout<<"Result:"<<result<<endl;
    return 0;
}