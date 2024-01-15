#include<bits/stdc++.h>
using namespace std;


class student{

    public:
    string name;
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }
    student(string s,int a,bool gen){
        name=s;
        age=a;
        gender=gen;
        cout<<"Parameterised constructor"<<endl;
    }
    student(student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    void display(){
        cout<<name;
        cout<<age;
        cout<<gender;
    }
    bool operator == (student &a){
        if(name==a.name&&age==a.age&&gender == a.gender){
            return true;
        }
        return false;
    }

};


int main(){
   student a;  //will call the default constructor;
   student b("urvi",23,1);
   student c;
   a.display();
   if(c==a){
    cout<<"Same"<<endl;
   }
   else{
    cout<<"Not same"<<endl;
   }
   return 0;

}