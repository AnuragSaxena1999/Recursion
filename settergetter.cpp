#include<bits/stdc++.h>
using namespace std;
class student {
    string name ; // private data members
    // datamembers of the  class
    public:
   
    int age;
    bool gender ;
    
    //setter function to access private data members by using setname function
    void setName(string s){
        name = s;
    }
    // getter function to get value of private data members
     /*void getName(){
         cout>>name;
     }*/

    // function or methods of the class and we dont need to give arguements
    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

};

int main(){
    // this is a array of objects in which we are taking inputs
    student array[3];
    for(int i = 0 ; i<3 ; i++){
        string s;
        
        cout<<"NAME:"<<endl;
        cin>>s;
        array[i].setName(s);
        cout<<"age:"<<endl;
        cin>>array[i].age;
        cout<<"gender:"<<endl;
        cin>>array[i].gender;
    }
    for(int i = 0 ; i<3 ; i++){
        array[i].print();
    }

return 0;
}