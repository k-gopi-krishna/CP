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
		int nop, res; cin >> nop >> res;
		char arr[] = {'*', '+', '-'};
		string ans;
		if (nop + res <= 0 or nop + 1 < res)cout << -1 << endl;
		else if (res == 0) {
			for (int i = 0; i < nop - 1; i++)ans += arr[0];
			ans += arr[2];
			cout << ans << endl;
		}
		else if (res > 0) {
			int val = res - 1;
			for (int i = 0; i < nop - val; i++)ans += arr[0];
			for (int i = 0; i < val; i++)ans += arr[1];
			cout << ans << endl;
		}
		else if (res < 0) {
			int val = res - 1;
			// cout<<val<<" ";b
			for (int i = 0; i < nop - abs(val); i++)ans += arr[0];
			for (int i = 0; i < abs(val); i++)ans += arr[2];
			cout << ans << endl;
		}
	}

	return 0;
}