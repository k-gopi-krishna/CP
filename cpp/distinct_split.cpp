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
		int n; cin >> n;
		string s; cin >> s;
		unordered_map<char, int>mp;
		for (auto i : s)mp[i]++;
		int res = INT_MIN;
		for (auto i : mp) {
			res = max(res, i.second);
		}
		cout << min(n - res + 1, res) << endl;
	}

	return 0;
}