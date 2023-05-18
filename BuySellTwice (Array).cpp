#include <bits/stdc++.h>
using namespace std;

void buysellTwice(int arr[], int size){
    int fb = INT_MIN;
    int fs = 0;
    int sb = INT_MIN;
    int ss = 0;
    
    for(int i = 0; i<size; i++){
        fb = max(fb,-arr[i]);
        fs = max(fs,fb+arr[i]);
        sb = max(sb,fs-arr[i]);
        ss = max(ss,sb+arr[i]);
    }
    
    cout<<ss;
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {2, 30, 15, 10, 8, 25, 80};
    buysellTwice(arr,sizeof(arr)/sizeof(arr[0]));
    //printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
