#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int arr[n]; inp;
		int minv = arr[0];
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] > minv) {
				ans = max(ans, arr[i] - minv);
			}
			else minv = arr[i];
		}
		if (ans == 0)cout << "UNFIT" << endl;
		else cout << ans << endl;
	}
	return 0;
}