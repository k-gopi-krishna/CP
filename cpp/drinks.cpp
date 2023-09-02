#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n; inp;
	double res = 0;
	for (int i = 0; i < n; i++) {
		res += arr[i];
	}
	res/=n;
	cout <<setprecision(12)<< res << endl;
	return 0;
}