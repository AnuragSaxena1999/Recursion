// binary search using recursion

#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int array[] , int s , int e , int key){
    // int s = 0;
    // int e = n-1;
    if(s>e){
        return false;
    }
    int mid = (s+e)/2;

    if(array[mid]==key){
        return true;
    }
    bool ans;
    if(array[mid]<key){
     ans = binarySearch(array , mid+1 , e , key);
    }else{
        ans =binarySearch(array , s , mid-1 , key);
    }
    return ans;
}
int main(){
int array[5]={1,2,3,4,5};
int key = 9 ;
bool ans = binarySearch(array , 0, 4 , key);
if(ans){
    cout<<"present";
}else{
    cout<<"absent";
}
return 0;
}