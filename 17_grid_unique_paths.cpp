#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	int N = m + n - 2;
	int r = m - 1;

	int ans = 1;

	for(int i = 1;i<=r;i++){
		ans = ans * (N - r + i);
		ans = ans / i;
	}
	return ans;
}
