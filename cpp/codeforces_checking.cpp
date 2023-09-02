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
	string s = "codeforces";
	while (n--) {
		bool flag = 0;
		char ch; cin >> ch;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ch) {flag = 1; break;}
		}
		if (flag)cout << "YES" << endl;
		else cout << "NO" << endl;

	}

	return 0;
}