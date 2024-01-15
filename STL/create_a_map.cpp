#include<bits/stdc++.h>  //includes all header files
using namespace std;

int main(){
    cout<<"Enter the number of student "<<endl;
    int students;
    cin>>students;
    string student_name;
    int score;
    map<string,int>mp;
    for(int i=0;i<students;i++){
        cout<<"Enter the names of the student "<<endl;
        cin>>student_name;
        cout<<"Enter the score "<<endl;
        cin>>score;
        mp.insert(pair<string,int>(student_name,score));
        //mp[student_name]=score;
    }
    for(auto&i:mp){
        cout<<i.first<<":"<<i.second<<endl;
    }
    cout<<"Enter the name to be search "<<endl;
    cin>>student_name;
    if(mp[student_name]==0){
          cout<<"Not found "<<endl;
    }
    else{
       cout<< student_name<<":"<<score;
    }
    return 0;
}