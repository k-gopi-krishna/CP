#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		string s1; cin >> s1;
		int n = s1.size();
		int maxv = -1;
		int c = 0; bool flag = 0;
		for (int i = 0; i < n; i++) {
			if (s1[i] != s1[0] and s1[i] != s1[n - 1]) {
				c++;
				maxv = max(maxv, c);
				flag = 1;

			}
			else{
				c=0;
			}
			// if (s2.size() > 0)cout << s2.size() << endl;
			// else cout << -1 << endl;
		}
		if(maxv>0)cout<<maxv<<endl;
		else cout<<-1<<endl;

	}
	return 0;
}