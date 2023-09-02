#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
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
		if (n & 1)cout << -1 << endl;
		else {
			int c0 = 0, c1 = 0;
			for (auto i : arr) {
				if (i & 1)c1++;
				else c0++;
			}
			if (c1 < c0) {
				if (c1 == 0)cout << -1 << endl;
				else {
					int res = abs(c1 - c0) / 2;
					cout << res << endl;
				}
			}
			else if (c1 > c0) {
				if (c1 < 2)cout << -1 << endl;
				else {
					int res = abs(c1 - c0) / 2;
					cout << res << endl;

				}


			}
			else cout << 0 << endl;
		}
	}

	return 0;
}