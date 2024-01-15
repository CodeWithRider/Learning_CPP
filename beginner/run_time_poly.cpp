#include<bits/stdc++.h>
using namespace std;
//Runtime polymorphism
//This is the example of method overriding
class Animal{
    public:
    virtual void sound()=0;
    void className(){
        cout<<"Animal"<<endl;
    }
};

class Cat : public Animal{
    public:
    void sound(){
        cout<<"Meaw"<<endl;
    }
    void className(){
        cout<<"Cat"<<endl;
    }
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<"Bark"<<endl;
    }
    void className(){
        cout<<"Dog"<<endl;
    }
};

int main(){
   //***what is dynamic dispatch
   //if we create a super class reference and assign child class object and if we call the virtual function of super classs then it will take the implementation of based class.This concept
   //is known as dynamic method dispatch.

   //This is another way to create object (using object reference)
   //here we are creating a pointer of super class and there we assigning drive class object 
   Animal *animal1=new Cat();
   //if we call the sound function then it will take implementation of cat class
   //because animal is pointing to cat
   //It is happening because sound is a virtual function and cat and dog overriding the sound function
   //Once again I am telling ypu please notice the virtual keyword
   animal1->sound();//Meaw
   //but if we call the normal function it will not behaving like this
   animal1->className();

   Animal *animal2 = new Dog();
   animal2->sound();//Bark
   animal2->className();//Animal

   //N:B one small thing here we are using pointer variable so we use new operator to create the object
   //and that pointer hold the object so we using ->arrow operator to access the property of the
   //class.
   return 0;
}