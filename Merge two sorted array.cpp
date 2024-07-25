#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> total;
	for(int i =0; i<m; i++){
		total.push_back(arr1[i]);
	}
	for(int i=0; i<n; i++){
		total.push_back(arr2[i]);
	}
	sort(total.begin(), total.end());
	return total;
}
