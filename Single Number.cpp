#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
	
	 int ans=a[0];

    for(int i=1;i<n;i++)

    { 
        ans=ans^a[i];

    }
	 return ans;   
	
}
