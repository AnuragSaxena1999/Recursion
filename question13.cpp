// reverse the string
#include<bits/stdc++.h>
using namespace std;
void reverseString(string &name , int i , int j ){
    if(i>j){
        return ;
    }
    swap(name[i] , name[j]);
    i++;
    j--;
    reverseString(name, i , j);
    
    
}
int main(){
    string name = "Anurag";
    reverseString(name , 0 , name.length()-1);
    cout<<name;

return 0;
}