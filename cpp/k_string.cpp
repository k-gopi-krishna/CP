#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k; cin >> k;
	string s; cin >> s;
	int n = s.size();
	char ch;
	int c = 0;sort(s.begin(), s.end());

	for (int i = 0; i < n; i++) {
		if (i % k == 0)ch = s[i];
		if (s[i] == ch)c++;
	}
	if (c == n and c % k == 0) {
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < n; j += k) {
				cout << s[j];
			}
		}
	}
	else cout << -1 << endl;

	return 0;
}