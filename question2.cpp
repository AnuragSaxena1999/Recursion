//find factorial of a number using recursion

#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n==0){
        return 1;
    }
    int factorial = n*fac(n-1);
    return factorial;
}
int main(){
int n;
cin>>n;
cout<<fac(n);
return 0;
}