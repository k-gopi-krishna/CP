#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	int val1 = 0, val2 = 0;
	if (s.size()< 7)cout << "NO" << endl;
	else {
		for (int i = 0; i < s.size(); i++) {

			if (s[i] == '1') {
				val1 += 1 ; val2 = 0;
				if (val1 == 7)break;
			}
			else {
				val2 += 1 ; val1 = 0;
				if (val2 == 7)break;

			}

		}
		if (val1 == 7 or val2  == 7)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}