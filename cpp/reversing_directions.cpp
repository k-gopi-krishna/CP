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
		string s1[n], s2[n];
		for (int i = 0; i < n; i++) {
			cin >> s1[i];
			getline(cin, s2[i]);
		}
		cout << "Begin" << s2[n - 1] << endl;
		for (int i = n - 1; i > 0; i--) {
			if (s1[i] == "Right") {
				cout << "Left" << s2[i - 1] << endl;
			}
			else cout << "Right" << s2[i - 1] << endl;
		}
	}
	return 0;
}