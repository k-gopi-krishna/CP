#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
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
		int n; cin >> n; inp(n);
		sort(arr, arr + n);
		unordered_map<int, int>mp;
		for (auto i : arr)mp[i]++;
		bool flag = 1;
		for (auto i : mp) {
			if (i.second == 1)
			{
				flag = 0;
				break;
			}
		}
		if (!flag)cout << "Marichka" << endl;
		else cout << "Zenyk" << endl;

	}

	return 0;
}