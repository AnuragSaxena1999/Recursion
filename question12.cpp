//sum of all elements or array

#include<bits/stdc++.h>
using namespace std;
int sumofArray(int *array , int n ){
    if(n==1){
        return array[0];
    }
    int remainingSum= sumofArray(array+1, n-1);
    int sum = array[0] + remainingSum;
    return sum;
    
}
int main(){
    int array[5] = {1,2,3,4,5};
    int sum = sumofArray(array , 5);
    cout<<sum;
    return 0;
}