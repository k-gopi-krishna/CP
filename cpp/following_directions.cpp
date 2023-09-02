#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		int x = 0, y = 0;
		bool flag = 0;
		for (auto i : s) {
				if (i == 'U')y++;
				else if (i == 'D')y--;
				else if (i == 'L')x--;
				else if (i == 'R')x++;
				if(x==1 and y==1){flag=1;break;}

		}
		if (flag)cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}