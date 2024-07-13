// merge sort

#include<bits/stdc++.h>
using namespace std;
void merge(int array[] , int s , int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int arr1[len1];
    int arr2[len2];

    int k = s;
    for(int i = 0; i<len1;i++){
        arr1[i]= array[k];
        k++;
    }

    for(int i = 0; i<len2 ; i++){
        arr2[i] = array[k];
        k++;
    }
    int i = 0;
    int j = 0;
    int index = s;

    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            array[index]=arr1[i];
            i++;
            index++;
        }
        else{
            array[index]=arr2[j];
            j++;
            index++;
        }
    }
    while(i<len1){
        array[index] = arr1[i];
        index++;
        i++;
    }
    while(j<len2){
        array[index]=arr2[j];
        j++;
        index++;
    }
}
void mergeSort(int array[] , int s , int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    mergeSort(array , s , mid);
    mergeSort(array , mid+1 , e);

    merge(array , s , e);

}
void print(int array[] , int n){
    for(int i= 0; i<n ;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
int array[6] = {22 , 14, 1, 15, 221, 3};
mergeSort(array , 0 , 5);
print(array , 6);
return 0;
}