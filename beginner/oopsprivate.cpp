#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;
    
    void setname(string s){
    name=s;
    }
    void getname(){
        cout<<name<<endl;
    }
    void display(){
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};
int main(){
    student a[3];
    string s;
    for(int i=0;i<3;i++){
        cin>>s;
        a[i].setname(s);
        cin>>a[i].age;
        cin>>a[i].gender;
    }
    for(int i=0;i<3;i++){
        a[i].getname();
        a[i].display();
    }
    return 0;
}