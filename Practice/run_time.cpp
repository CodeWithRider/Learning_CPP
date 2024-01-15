#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    virtual void behaviour()=0;
    void display(){
        cout<<"Animal"<<endl;
    }

};

class rohan:public student{
    public:
    void behaviour(){
       cout<<"silent"<<" ";
    }
    void display(){
        cout<<"Rohan"<<endl;
    }
};
class priyanka:public student{
    public:
    void behaviour(){
      cout<<"naughty"<<" ";
    }
    void display(){
        cout<<"priyanka"<<" ";
    }

};

int main(){
    student *s1=new rohan();
    s1->behaviour();
    student *s2=new priyanka();
    s2->behaviour();
    s1->display();
    s2->display();

    

}