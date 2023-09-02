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
		int n, x; cin >> n >> x;
		inp;
		int ec = 0;
		for (auto i : arr){
			if(!(i&1))ec++;
		}

		if (x % 2) {
			if (ec % 2) {
				cout <<( ec / 2) + 1 << endl;
			}
			else cout << ec / 2 << endl;
		}
		else {
			if (ec != n) {
				cout << ec << endl;
			}
			else cout << -1 << endl;
		}
	}

	return 0;
	       
}