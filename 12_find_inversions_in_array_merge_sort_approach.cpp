#include <bits/stdc++.h> 

long long inv_count = 0;

void merge(long long *arr, int low, int mid,int high){

    long long *temp =  new long long[high - low + 1];
    int left = low;
    int right = mid+1;
    int k = 0;

    while(left<=mid&& right<=high){
        if (arr[left] <= arr[right]){
            temp[k++] = arr[left++];
        }
        else{
            temp[k++] = arr[right++];
            inv_count += (mid - left + 1);
        }       
    }
    while(left <= mid){
        temp[k++] = arr[left++];
    }
    while(right<=high){
        temp[k++] = arr[right++];
    }

    for(int i = low; i<= high;i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(long long *arr, int low, int high){

    int mid = 0;

    if (low < high){

        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
    return;
}

long long getInversions(long long *arr, int n){
    // Write your code here.

    //int inv_count = 0;
    mergeSort(arr,0, n-1);
    return inv_count;
}
