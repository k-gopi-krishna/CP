#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	double a, b = 0, res;
	for (int i = 0; i < n; i++) {
		cin >> a;
		b = max(b, ceil(a / m));
		if (b == ceil(a / m))res = i + 1;

	}
	cout << res;
	return 0;
}