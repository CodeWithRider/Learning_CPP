#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0;
    vector<int>v;
    for(int i=0;i<n;i++){  //to take elements from user
         cin>>a;
        v.push_back(a);
    }
    /*v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);*/
    for(auto &p:v){
        cout<<p<<" "<<endl;  //to print the elements
    }
    /*cout<<v.at(2)<<endl;    //printing element at index 2.
    cout<<v.front()<<endl; //to print the front element
    cout<<v.back()<<endl;   //to print the back element
    v.pop_back();     //to pop back the element
    //count function to count the number of occurences of a item in a vector
    int count1=count(v.begin(),v.end(),3);
    cout<<count1;*/
    //Find function will return the iterator of the item to be find;
    auto itr=find(v.begin(),v.end(),3);
    if(itr!=v.end()){
       cout<<"Element found in vector at index"<<distance(v.begin(),itr)<<endl;
    }
    //If the element is not found
    else{
        cout<<"Element not found in vector "<<endl;
    }
    return 0;
}