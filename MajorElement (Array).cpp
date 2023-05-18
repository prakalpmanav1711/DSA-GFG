#include <bits/stdc++.h>
using namespace std;


int majorElement(int arr[], int n){
    map<int,int> flag;
    for(int i = 0; i<n; i++){
        flag[arr[i]]++;
    }
    for(auto i:flag){
        if(i.second>n/2){
            return i.first;
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
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    cout<<majorElement(arr,9);
    //printArray(arr1,4);
    return 0;
}
