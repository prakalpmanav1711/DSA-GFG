#include <bits/stdc++.h>
using namespace std;

void zeroShift(int arr[], int size){
    int temp[size];
    int count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]!=0){
            temp[count++] = arr[i];
        }
    }
    int zeros = count;
    for(int i = 0; i<size-zeros; i++){
        temp[count++] = 0;
    }
    for(int i = 0; i<size; i++){
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {0,34,0,67,0,90,9,21,0,32,0,0,6,53,123,124,45,653,12,3,44,1,1,24};
    zeroShift(arr,sizeof(arr)/sizeof(arr[0]));
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
