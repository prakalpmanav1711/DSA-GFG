#include <bits/stdc++.h>
using namespace std;

void inceptionArray(int arr[], int size){
    map<int,int> flag;
    for(int i = 0; i<size; i++){
        flag[arr[i]] = 1;
    }
    vector<int> temp(size);
    for(int i = 0; i<size; i++){
        if(flag[i]==1){
            arr[i] = i;
        }
        else{
            arr[i] = -1;
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8, 11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
    inceptionArray(arr,sizeof(arr)/sizeof(arr[0]));
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
