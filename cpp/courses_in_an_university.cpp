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
			int maxv = -1;
			for (auto i : arr)maxv = max(maxv, i);
			cout << n - maxv << endl;
		}
		return 0;
	}