#include<bits/stdc++.h>
using namespace std;
class student {

    // datamembers of the  class
    public:
    string name ;
    int age;
    bool gender ;

    //function or methods of the class and we dont need to give arguements
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
        cout<<"NAME:"<<endl;
        cin>>array[i].name;
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