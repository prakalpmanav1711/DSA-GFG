#include <bits/stdc++.h>
using namespace std;

void bigThree(int arr[], int size){
    sort(arr,arr+size);
    cout<<arr[--size]<<" "<<arr[--size]<<" "<<arr[--size];
}

int main() {
    int arr[] = {2,34,5,67,8,90,1,21,3,32,4,43,6,53,123,124,45,653,12,3,44,1,1,24};
    bigThree(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
