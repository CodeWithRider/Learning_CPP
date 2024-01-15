#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
     array<int,5>ar={1,2,3,4,5};
     for(int i:ar){                  //to print the array
        cout<<i<<" "<<endl;
     }
     cout<<ar.size()<<endl;        //to print the size
     cout<<ar.at(2)<<endl;       //to get the element at index 2
    
     cout<<ar.empty();                //to check empty or not
   return 0;
}


