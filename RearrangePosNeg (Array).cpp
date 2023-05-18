#include <bits/stdc++.h>
using namespace std;

void rearrangePosNeg(int arr[], int size){
    map<int,int> flag;
    for(int i = 0; i<size; i++){
        flag[arr[i]] = 1;
    }
    int count = 0;
    for(auto i:flag){
        if(count+2>=size){
            count = 1;
        }
        if(i.second==1){
            arr[count+=2] = i.first;
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = { -1, 2, -3, 4, 5, 6, -1,-23,-5,67,3,-1,40,-3,-7, 8, 9 };
    rearrangePosNeg(arr,sizeof(arr)/sizeof(arr[0]));
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
