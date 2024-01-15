#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void display(){
        cout<<"Name="<<endl;
        cout<<name<<endl;
        cout<<"Age"<<endl;
        cout<<age<<endl;
        cout<<"Gender"<<endl;
        cout<<gender<<endl;
    }
};

int main(){
    student arr[3]; //array of objects
    for(int i=0;i<3;i++){
        cout<<"age"<<endl;
        cout<<"Name =";
        cin>>arr[i].name;
        cout<<"Age =";
        cin>>arr[i].age;
        cout<<"Gender =";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].display();
    }
    return 0;

}