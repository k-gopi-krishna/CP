// solved it!1

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
		string s;
		cin >> s;
		int n = s.size();
		int c = 0;
		if (s[0] == '0')c++;
		for (int i = 1; i < n; i++) {
			if (s[i] != s[i - 1])c++;
		}
		cout << c << endl;

	}
	return 0;
}