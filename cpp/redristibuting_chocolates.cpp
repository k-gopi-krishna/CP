#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int arr[3];
		for (int i = 0; i < 3; i++)cin >> arr[i];
		int res = 0;
		for (auto i : arr)res += i;
		if (res < 6)cout << "NO" << endl;
		else cout << "YES" << endl;


	}
	return 0;
}