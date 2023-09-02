#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	int n = s.size();
	bool flag = 1;
	for (int i = 0; i < n;) {
		if (s[i] == '1' and s[i + 1] == '4' and s[i + 2 ]== '4')i += 3;
		else if (s[i] == '1' and s[i + 1] == '4')i += 2;
		else if (s[i] == '1')i++;
		else {flag = 0 ; break;}
	}
	if (flag)cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}