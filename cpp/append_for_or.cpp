#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n, y; cin >> n >> y;
		int arr[n]; inp;
		int res = arr[0];
		bool flag = 0;
		if (n == 1 and y == 1)cout << 1 << endl;
		else {
			for (int i = 1; i < n; i++)res |= arr[i];
			if (res == y)cout << 0 << endl;
			else {
				for (int i = 1; i < y; i++) {
					if ((res | i) == y) {
						res = i;
						flag = 1;
						break;

					}
					else flag = 0;
				}
				if (flag)cout << res << endl;
				else cout << -1 << endl;
			}
		}
	}
	return 0;
}