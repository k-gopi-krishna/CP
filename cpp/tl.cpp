#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	int a1[n], a2[m];
	for (int i = 0; i < n; i++)cin >> a1[i];
	for (int i = 0; i < m; i++)cin >> a2[i];
	int min1 = INT_MAX, max1 = -1, min2 = INT_MAX;
	for (auto i : a1) {
		min1 = min(i, min1);
		max1 = max(i, max1);
	}
	for (auto i : a2) {
		min2 = min(min2, i);
	}
	if (max(2 * min1, max1) < min2) {
		cout << max(2 * min1, max1) << endl;
	}
	else cout << -1 << endl;
	return 0;

}