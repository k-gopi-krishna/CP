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
		vector<vector<int>>arr(n, vector<int>(n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)cin >> arr[i][j];
		}
		int cc = 0, rc = 0;
		for (int i = 0; i < n; i++) {
			bool flag = 0;
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 0)flag = 1;
			}
			if (flag)rc++;
		}
		for (int i = 0; i < n; i++) {
			bool flag = 0;
			for (int j = 0; j < n; j++) {
				if (arr[j][i] == 0)flag = 1;
			}
			if (flag)cc++;
		}
		if (cc == n and rc == n)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}