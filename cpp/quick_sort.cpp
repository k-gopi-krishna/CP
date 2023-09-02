#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int partition(int *arr, int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}

void quickosrt(int *arr, int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickosrt(arr, low, pi - 1);
		quickosrt(arr, pi + 1, high);
	}

}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {4, 21, 3, 42, 1, 5};
	int n = sizeof(arr) / sizeof(int );
	quickosrt(arr, 0, n - 1);
	for (auto i : arr)cout << i << " ";
	return 0;
}