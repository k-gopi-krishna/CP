#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n; cin >> n; inp(n);
		int ans = INT_MAX;
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				ans = min(ans, abs(arr[0] - arr[1]));
			}
			else if (i == (n - 1)) {
				ans = min(ans, abs(arr[i] - arr[i - 1]));
			}
			else {
				ans = min(ans, max(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])));

			}
		}
		cout << ans << endl;
	}

	return 0;
}