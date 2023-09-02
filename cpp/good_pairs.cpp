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
		inp;
		int res = 0;
		int c = 0;
		unordered_map<int, int>mp;
		for (auto i : arr)mp[i]++;
		for (auto i : mp) {
			if (i.second > 1) {
				res = (i.second) * (i.second - 1) / 2;
				c += res;

			}
		}
		cout << c << endl;


	}
	return 0;
}