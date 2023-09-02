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
		int a, b, c, d; cin >> a >> b >> c >> d;
		set<int>st;
		for (int i = a; i <= b; i++)st.insert(i);
		for (int i = c; i <= d; i++)st.insert(i);
		cout << st.size() << endl;
	}

	return 0;
}