#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int ans = 0;
	int temp = -1;
	while (n--) {
		int a, b; cin >> a >> b;
		ans += (b - a);
		temp = max(ans, temp);
	}
	cout<<temp<<endl;
	return 0;
}