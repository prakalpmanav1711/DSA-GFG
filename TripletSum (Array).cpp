#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int arr[], int n, int X){
    sort(arr,arr+n);
    for(int i = 0; i<n; i++){
        int start = i+1;
        int end = n-1;
        while(start<end){
            if(arr[start]+arr[i]+arr[end]==X){
                return true;
            }
            else if(arr[start]+arr[i]+arr[end]>X){
                end--;
            }
            else{
                start++;
            }
        }
    }
    return false;
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1, 2, 2, 1};
    if(find3Numbers(arr,sizeof(arr)/sizeof(arr[0]),5)){
        cout<<"Found";
    }
    return 0;
}
