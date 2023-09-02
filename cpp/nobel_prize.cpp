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
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		unordered_set<int>s;
		int arr[n]; inp;
		for (auto i : arr)s.insert(i);
		if (s.size() < n)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}