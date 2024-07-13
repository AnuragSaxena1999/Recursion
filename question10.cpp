// linear search using recursion
#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int *array , int n, int key){
    if(array[0]==key){
        return true;
    }
    if(n==0){
        return false;
    }
    bool ans = linearSearch(array + 1 , n-1 , key);
    return ans;
}
int main(){
int array[5] ={2, 3, 4, 5, 6};
int key = 2;
bool ans = linearSearch(array , 5 ,key);
if(ans){
    cout<<"present";
}
else{
    cout<<"Absent";
}
return 0;
}