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
		int r, c; cin >> r >> c;
		int x1, y1, x2, y2;
		int cn = 0, cn1 = 0;
		cin >> x1 >> y1 >> x2 >> y2;

		if (x1 - 1 >= 1 )++cn;
		if (x1 + 1 <= r )++cn;
		if (y1 - 1 >= 1)++cn;
		if ( y1 + 1 <= c)++cn;
		if (x2 - 1 >= 1 )++cn1;
		if (x2 + 1 <= r )++cn1;
		if (y2 - 1 >= 1)++cn1;
		if ( y2 + 1 <= c)++cn1;
		cout << cn << " " << cn1 << endl;

	}


	return 0;
}