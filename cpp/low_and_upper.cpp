#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int lower_bound(vector<int>arr, int key) {
	int l = 0, h = arr.size() - 1;
	int ans = -1;
	int mid;
	while (l <= h) {
		mid = (l + h) / 2;
		if (arr[mid] == key) {
			ans = mid;
			h = mid - 1;
		}
		else if (arr[mid] < key)l = mid + 1;
		else h = mid - 1;

	}
	return ans;
}
int upper_bound(vector<int>arr, int key) {
	int l = 0, h = arr.size() - 1;

	int ans = -1;
	while (l <= h) {
		int mid = (l + h) / 2;
		if (arr[mid] == key) {
			ans = mid;
			l = mid + 1;
		}
		else if (arr[mid] < key)l = mid + 1;
		else h = mid - 1;
	}
	return ans;
}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int>arr = {1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 4, 4, 5};
	int n = arr.size();
	cout << lower_bound(arr, 4) << endl;
	cout << upper_bound(arr, 4);

	return 0;
}