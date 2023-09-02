#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n;
	cin >> m;
	int arr1[m];
	unordered_map<int, int>mp;
	for (int i = 0; i < m; i++) {
		cin >> arr1[i];
		mp[arr1[i]] = i + 1;
	}
	cin >> n;
	int res1 = 0, res2 = 0;
	for (int i = 0; i < n; i++) {
		int val; cin >> val;
		res1 += mp[val];
		res2 += m - mp[val] + 1;

	}
	cout << res1 << " " << res2 << endl;
	return 0;
}