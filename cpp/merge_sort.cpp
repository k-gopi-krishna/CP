#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void merge(int *arr, int s, int e) {
	int i = s, mid = (s + e) / 2, j = mid + 1;
	vector<int>temp;
	while (i <= mid and j <= e) {
		if (arr[i] < arr[j]) {
			temp.push_back(arr[i++]);
		}
		else {
			temp.push_back(arr[j++]);
		}
	}
	while (i <= mid) {
		temp.push_back(arr[i++]);
	}
	while (j <= e) {
		temp.push_back(arr[j++]);
	}
	int k=0;
	for(int i=s;i<=e;i++){
		arr[i]=temp[k++];
	}


}
void mergesort(int *arr, int s, int e) {
	if (s >= e)return ;
	int mid = (s + e) / 2;
	mergesort(arr, s, mid);
	mergesort(arr, mid + 1, e);
	merge(arr, s, e);
}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {5, 32, 2, 1, 34};
	int n = sizeof(arr) / sizeof(int);
	mergesort(arr, 0, n - 1);
	for(auto i:arr)cout<<i<<" ";
	return 0;
}