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
	inp;
	int sum = 0, ans = 0;
	for (auto i : arr)sum += i;
	for (int i = 1; i < 6; i++) {
		if ((sum + i) % (n + 1) != 1)ans++;
	}
	cout << ans;
	return 0;
}