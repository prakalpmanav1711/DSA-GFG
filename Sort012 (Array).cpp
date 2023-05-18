#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
    {
        map<int,int> flag;
        for(int i = 0; i<n; i++){
            flag[arr[i]]++;
        }
        int ind = 0;
        for(auto i:flag){
            for(int j = 0; j<i.second; j++){
                arr[ind++] = i.first;
            }
        }
    }

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    sort012(arr,sizeof(arr)/sizeof(arr[0]));
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
