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
	int t;
	cin >> t;
	while (t--) {
		int n, k; string s;
		cin >> n >> k >> s;
		bool flag = 0;
		int c = 0;
		int len = s.size();
		if (k == 0) {
			for (int i = 0; i < len / 2; i++) {
				if (s[i] != s[len - i - 1]) {flag = 1; break;}
			}
			if(flag)cout<<"NO"<<endl;
		}
		else {
			for (int i = 0; i < len / 2; i++) {
				if (s[i] != s[len - i - 1]) {c++;}
			}
			if(c==k)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}

	}
	return 0;
}