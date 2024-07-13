// index of first and the last occurrence of element in an array

#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int array[] , int i ,int key){
    if(i>4){
        return -1;
    }
    if(array[i]==key){
        return i;
    }
    return firstOccurence(array ,i+1,key);
}
int lastOccurence(int array[] , int i, int key){
    if(i<0){
        return -1;
    }
    if(array[i]==key){
        return i;
    }
    return lastOccurence(array , i-1 , key);
}
int main(){
int array[5] ={3, 2, 3, 2, 1};
int key  = 2;
int sIndex = 0;
int eIndex = 4;
cout<<firstOccurence(array ,sIndex,  key)<<endl;
cout<<lastOccurence(array , eIndex , key)<<endl;
return 0;
}