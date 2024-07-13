//You are climbing a staircase. It takes n steps to reach the top.
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? you are at 0th stair at the beginning.

#include<bits/stdc++.h>
using namespace std;
int noOfWays(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = noOfWays(n-1) + noOfWays(n-2);
    return ans;
}
int main(){
int noOfStairs;
cin>>noOfStairs;
cout<<noOfWays(noOfStairs);
return 0;
}