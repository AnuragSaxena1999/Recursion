//check it is palindrome or not using recursion 


#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s , int i , int j){
        if(i>j){
            return true;
        }
        if(s[i]!=s[j]){
            return false;
        }
        bool ans = checkPalindrome(s , i+1 , j-1);
        return ans;

}
int main(){
    string s = "abbaa";
    bool ans = checkPalindrome(s , 0 , s.length()-1);
    if(ans){
        cout<<"yes ";
    }else{
        cout<<"no";
    }
return 0;
}