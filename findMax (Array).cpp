#include <bits/stdc++.h>
using namespace std;

void binSearch(int arr[],int start, int end,int* count){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;
    (*count) = max(arr[end],max(arr[start],max((*count),arr[mid])));
    if(arr[mid-1]>arr[mid]){
        binSearch(arr,start,mid-1,count);
    }
    else{
        binSearch(arr,mid+1,end,count);
    }
}

int findMaximum(int arr[], int n) {
    int count = -1;
    binSearch(arr,0,n-1,&count);
    return count;
}



void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    cout<<findMaximum(arr,sizeof(arr)/sizeof(arr[0]));
    //printArray(arr1,4);
    return 0;
}
