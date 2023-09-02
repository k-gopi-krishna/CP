#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n];
	int res = -1;
	int ans = 1;	for (int i = 0; i < n; i++)cin >> arr[i];
	int m; cin >> m; int arr1[m];
	for (int i = 0; i < m; i++)cin >> arr1[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr1[j] % arr[i] == 0) {
				int val = arr1[j] / arr[i];
				if (val > res) {
					res = val;
					ans = 1;
				}
				else if (val == res)ans++;
			}

		}
	}
	cout << ans << endl;

	return 0;
}