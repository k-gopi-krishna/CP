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
		int n;
		cin >> n;
		int arr[n]; inp;
		int ep = (n) / 2;
		int op = (n + 1) / 2;
		int ec = 0, oc = 0;
		for (auto i : arr) {
			if (i % 2 == 0)ec++;
			else oc++;
		}
		cout << min(ec, op) + min(oc, ep) << endl;


	}
	return 0;
}