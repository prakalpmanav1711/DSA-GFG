#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(int arr[], int n){
    if(n==1){
        return 1;
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
    }
    int temp = 0;
    for(int i = 1; i<n; i++){
        temp+=arr[i-1];
        if(2*temp==sum-arr[i]){
            return i+1;
        }
    }
    return -1;
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1, 2, 2, 1};
    cout<<equilibriumPoint(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
