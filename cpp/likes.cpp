#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
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
		int n; cin >> n; inp(n);
		vector<int>cpa(arr, arr + n);
		unordered_map<int, int>mp;
		int c = 0;
		sort(arr, arr + n, greater<int>());
		for (auto i : arr) {
			if (i > 0) {mp[i]++; c++; cout << c << " ";}
			else {mp[abs(i)]--; c--; cout << c << " ";}
		}
		cout << endl;
		map<int, int>pos, neg;
		int c1 = 0;
		int c2 = 0;
		for (auto i : cpa) {
			if (i > 0) {
				pos[i]++; c1 += 1;
			}
			else {
				neg[abs(i)]++; c2++;
			}
		}
		c = 0;
		for (auto i : neg) {
			if (i.first > 0) {
				c = 0;
				cout << 1 << " " << 0 << " ";
			}

		}
		for (int i = 0; i < n - 2 * c2; i++)cout << ++c << " ";

		cout << endl;
	}

	return 0;
}