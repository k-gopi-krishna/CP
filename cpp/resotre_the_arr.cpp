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
		int n; cin >> n;
		inp(n - 1);
		vector<int>ans;
		ans.push_back(arr[0]);
		for (int i = 0; i < n - 2; i++) {
			ans.push_back(min(arr[i], arr[i + 1]));
		}
		ans.push_back(arr[n - 2]);
		for (auto i : ans)cout << i << " ";
		cout << endl;


	}

	return 0;
}
