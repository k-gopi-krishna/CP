#include <bits/stdc++.h>
// #define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int lowerbound(int arr[],int n ,int size){
	int low=0,high=size-1;
	int mid,ans=-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==n){
			ans=mid;
			high=mid-1;
		}
		else if(arr[mid]<n)low=mid+1;
		else high=mid-1;
	}
	return ans;
}
int upperbound(int arr[], int n, int size) {
	int low = 0, high = size-1;
	int ans = -1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] == n) {
			low = mid + 1;
			ans = mid;
		}
		else if (arr[mid] < n) {
			low = mid + 1;
		}
		else high = mid - 1;
	}
	return ans;

}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 1,1,1, 3,3, 3, 3, 3, 3, 4, 4, 5, 5, 5};
	int n = sizeof(arr) / sizeof(int);
	cout << arr[upperbound(arr, 3, n)+1]<<endl;;
	cout << arr[lowerbound(arr, 3, n)];

	return 0;
}