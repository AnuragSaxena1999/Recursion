// Quick Sort

#include <bits/stdc++.h>
using namespace std;
int partition(int array[] , int s  ,int e){
    //pivot element tey kiya
    int pivot = array[s];

    //pivot ko uske sahi place pr insert krne k liye usse smaller elements count kiya
    int count = 0;
    for(int i = s+1; i<=e ; i++){
        if(array[i]<=pivot){
            count++;
        }
    }

    // pivot index har bar change hoga for every different recursion call
    int pivotIndex = s + count;
    swap(array[s] , array[pivotIndex]);

    // pivot k left side me smaller and right me larger elements krne hai
    int i = s;
    int j = e;
    while(i<pivotIndex && pivotIndex<j){
         while(array[i]<=pivot){
            i++;

         }
         while(array[j]>pivot){
            j--;
         }
        if(array[i]>pivot && array[j]<pivot){
            swap(array[i] , array[j]);
            i++;
            j--;
        }
       
    }
    return pivotIndex;


}
void quickSort(int array[] , int s , int e){
    if(s>=e){
        return ;
    }
    int p = partition(array , s , e);

    quickSort(array, s , p-1);
    quickSort(array, p+1 , e);
}

void print(int array[] , int n){
    for(int i = 0; i<n ; i++){
        cout<<array[i]<<" ";
    }
}
int main()
{
    int array[6] = {22, 14, 1, 15, 221, 3};
    quickSort(array, 0, 5);
    print(array, 6);
    return 0;
}