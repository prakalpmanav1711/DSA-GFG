#include <bits/stdc++.h>
using namespace std;

void mergeconstaux(int arr1[], int arr2[], int m, int n){
    int i = m-1;
    int j = 0;
    while(i>=0 && j<n){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
        }
        else{
            j++;
        }
    }
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
} 

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    mergeconstaux(arr1,arr2,4,5);
    printArray(arr1,4);
    printArray(arr2,5);
    return 0;
}
