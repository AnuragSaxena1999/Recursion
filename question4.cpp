// power of a number

#include<bits/stdc++.h>
using namespace std;
int pow(int n , int p){
    if(p==0){
        return 1;
    }
    int power = n * pow(n,p-1);
    return power;
}
int main(){
int n;
cin>>n;
int p;
cin>>p;
cout<<pow(n,p);

return 0;
}