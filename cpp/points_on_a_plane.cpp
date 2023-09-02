#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
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
		int res = sqrt(n-1);
		cout  << res << endl;

	}

	return 0;
}