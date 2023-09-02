#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int ans(int n, int x, int y) {
	int a = min(x, n + 1 - x);
	int b = min(y, n + 1 - y);
	return min(a, b);
}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n, x1, y1, x2, y2;
		cin >> n >> x1 >> y1 >> x2 >> y2;
		cout << abs(ans(n, x1, y1) - ans(n, x2, y2)) << endl;

	}

	return 0;
}