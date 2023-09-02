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
		int arr[n]; inp;
		if (n % 2 == 0)cout << "no" << endl;
		else {
			bool flag = 1;
			int mid = n / 2;

			if (arr[mid] != 7) { cout << "no" << endl; break;}
			else {
				for (int i = 0; i < mid; i++) {
					if (arr[i] == arr[n - 1 - i])continue;
					else {flag = 0; break;}
				}

			}
			if (flag)cout << "yes" << endl;
			else cout << "no" << endl;

		}

	}
	return 0;
}