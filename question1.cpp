// find the sum of n numbers using recursion


#include<bits/stdc++.h>
using namespace std;

int sumofNumbers(int n){
    if(n==0){
        return 0;
    }
    
    int prevSum = n+sumofNumbers(n-1);
    return  prevSum;
}
int main(){
int n;
cin>>n;
cout<<sumofNumbers(n);
return 0;
}