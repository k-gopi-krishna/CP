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
	int n; cin >> n;
	inp(n);
	int c1 = 0, c2 = 0;
	for (auto i : arr) {
		if (i == 100)c1++;
		else c2++;
	}
	int val2 = c2 % 2;

	int val1 = c1 - (val2 * 2);
	if (val1 >= 0 and val1% 2 == 0)cout << "YES";
	else cout << "NO";
	return 0;
}