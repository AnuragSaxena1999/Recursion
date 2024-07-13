//fibbonacci series using recursion

#include<bits/stdc++.h>
using namespace std;
int fibbo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int sum =  fibbo(n-1) + fibbo(n-2);
    return sum;
}
int main(){
int n ;
cin>>n;
cout<<fibbo(n);
return 0;
}