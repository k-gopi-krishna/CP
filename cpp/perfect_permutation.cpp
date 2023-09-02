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
	if (n % 2 == 1)cout << -1 << endl;
	else {
		cout << "2 1";
		for (int i = 3; i < n; i += 2) {
			cout <<" "<< i + 1 << " " << i;

		}
		cout << endl;
	}
	return 0;
}