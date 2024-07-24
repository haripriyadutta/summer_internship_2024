#include <algorithm>
#include <vector>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here.
	vector<pair<int,int>> ob;

 int j=arr.size()-1, i=0;

 sort(arr.begin(), arr.end());

 while(i<j){

 if(arr[i]+arr[j]==target){
	 ob.push_back(make_pair(arr[i],arr[j]));

  i++;

  j--;

 }

 else if(arr[i]+arr[j]>target){

  j--;

 }

 else if(arr[i]+arr[j]<target){

  i++;

 }

 }

 if(ob.empty()){

 ob.push_back(make_pair(-1,-1));

 }

 return ob;
}
