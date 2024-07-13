// is array sorted or not 

#include<bits/stdc++.h>
using namespace std;
bool isArraySorted(int *array , int n){
    if(n==1){
        return true;
    }
    if(array[0]>array[1]){
        return false;
    }
    bool ans = isArraySorted(array+1 , n-1);
    return ans;
}
int main(){
int array[6] ={2, 3, 4, 5, 9 , 8} ;
bool ans = isArraySorted(array , 6);
if(ans){
    cout<<"Array is sorted";
}else{
    cout<<"Array is not sorted";
}
return 0;
}