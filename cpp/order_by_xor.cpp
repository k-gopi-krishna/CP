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
		int a, b, c; cin >> a >> b >> c;
		int ans = 0, cnt = 0;
		for (int i = 0; i < 100; i++) {
			if ((a ^ i )< (b ^ i)) {
				if ((b ^ i) <( c ^ i)) {
					ans = i;
					cnt++;
				}
			}
		}
		if (cnt == 0)cout << -1 << endl;
		else cout << ans << endl;

	}

	return 0;
}