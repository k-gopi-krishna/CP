#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<unordered_map>
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
		if (!(n & 1))cout << -1 << endl;
		else {
			int c = 40;
			vector<int>ans;
			while (n != 1 and c--) {
				if (((n + 1) / 2) % 2) {
					n = (n + 1) / 2;
					ans.push_back(1);
				}
				else {
					n = (n - 1) / 2;
					ans.push_back(2);
				}
			}
			
			if (n == 1) {
				cout << ans.size() << endl;
				reverse(ans.begin(), ans.end());
				for (auto i : ans)cout << i << " ";
				cout << endl;
			}
			else cout << -1 << endl;

		}
	}

	return 0;
}