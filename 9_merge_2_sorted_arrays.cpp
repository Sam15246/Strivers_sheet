#include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.

	int arr1_right = m - 1;
	int arr2_right = n - 1;

	int index_from_last = m + n - 1;

	while(arr1_right >=0 && arr2_right>=0){

		if (arr1[arr1_right] > arr2[arr2_right]){

			arr1[index_from_last--] = arr1[arr1_right--];
		}
		else{
			arr1[index_from_last--] = arr2[arr2_right--];

		}
	}

	// while(arr1_right >= 0){
	// 	arr1[index_from_last--] = arr1[arr1_right--];
	// }
	while(arr2_right >= 0){
		arr1[index_from_last--] = arr2[arr2_right--];
	}
	return arr1;
}
