// solved it!!

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
		int c = 0;
		ll int arr[n]; inp;
		map<int, int>m;
		for (auto i : arr)m[i]++;
		for (int i = 1; i <= n; i++) {
			if (m[i] == 0)c++;
		}
		cout << c << endl;
	}
	return 0;
}