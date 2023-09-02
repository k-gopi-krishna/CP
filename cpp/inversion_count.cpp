#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int merge(int *arr, int s, int e) {
	int cnt=0;
	int i = s, mid = (s + e) / 2, j = mid + 1;
	vector<int>temp;
	while (i <= mid and j <= e) {
		if (arr[i] < arr[j]) {
			temp.push_back(arr[i++]);
		}
		else {
			temp.push_back(arr[j++]);
			cnt+=mid-i+1;
	
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
	return cnt;


}
int inverse_count(int *arr, int s, int e) {
	if (s >= e)return 0;
	int mid = (s + e) / 2;
	int c1=inverse_count(arr, s, mid);
	int c2=inverse_count(arr, mid + 1, e);
	int cc=merge(arr, s, e);
	return c1+c2+cc;
}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {0,5, 2,3,1};
	int n = sizeof(arr) / sizeof(int);
	cout<<inverse_count(arr, 0, n - 1);
	return 0;
}