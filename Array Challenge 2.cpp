#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    int cnt=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > Max){
            Max = arr[i];
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
