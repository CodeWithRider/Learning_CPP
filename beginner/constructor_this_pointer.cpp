#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    //These are all private member
    int id;
    string name;
    string address;

    public:
    //constructor
    student(int id,string name,string address){
    //This refer the current object
    this->id=id;
    this->name=name;
    this->address=address;
    }
//another constructor here we are doing constructor overloading
student(){
    this->id=0;
    this->name="Null";
    this->address="Null";
}
//member function
void printStudentDetails(){
    cout<<"-----------------------------"<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"-----------------------------"<<endl;
}
};

int main(){
    student s1;
    student s2(1001,"Priyanka","natun para");
    s1.printStudentDetails();
    s2.printStudentDetails();

    return 0;
}