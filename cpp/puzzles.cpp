// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	int arr[m];
	for (int i = 0; i < m; i++)cin >> arr[i];
	sort(arr, arr + m);
	int minv = arr[n - 1] - arr[0];
	for (int i = 1; i <= m - n; ++i ) {
		if ((arr[n + i - 1] - arr[i]) < minv) {
			minv = arr[n + i - 1] - arr[i];
		}
	}
	cout << minv << endl;

	return 0;
}