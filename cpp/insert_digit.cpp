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
		int n; cin >> n;
		char ch; cin >> ch;
		string s; cin >> s;
		int val = -1;
		for (int i = 0; i < n; i++) {
			if (s[i] < ch) {
				val = i;
				break;
			}
		}
		if (val == -1) {
			s += ch;
			cout << s << endl;
		}
		else {
			string ans;
			for (int i = 0; i < n; i++) {
				if (i == val)ans += ch;
				ans += s[i];

			}
			cout << ans << endl;
		}
	}

	return 0;
}