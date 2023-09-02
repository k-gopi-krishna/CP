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
		int n; cin >> n;
		string s; cin >> s;
		int c = 0;
		for (int i = 1; i < n; i++) {
			if (s[i] == s[i - 1]) {c++; break;}
			else c = 0;

		}
		if (c >= 1)cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}