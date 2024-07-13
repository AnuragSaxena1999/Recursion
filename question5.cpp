// priint numbers in decreasing and increasing  order by using recursion

#include<bits/stdc++.h>
using namespace std;
void decOrder(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decOrder(n-1);
}
void incOrder(int n){
    if(n==0){
        return;
    }
    incOrder(n-1);
    cout<<n<<" ";
}
int main(){
int number;
cin>>number;
incOrder(number);
decOrder(number);
return 0;
}