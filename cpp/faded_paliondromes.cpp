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
		int len = s.length();
		int mid;
		bool flag = 0;
		if (len % 2 == 0)mid = len/2;
		else mid = len / 2 + 1;
		for (int i = 0; i < mid; i++) {
			if (s[i] == '.' and s[len - i - 1] == '.') {
				s[i] = 'a';
				s[len - i - 1] = 'a';
			}
			else if (s[i] == '.')s[i] = s[len - i - 1];
			else if (s[len-1-i] == '.')s[len-i-1] = s[i];
			else if (s[i] != s[len - i - 1]) {flag = 1; break;}
		}
		if (flag)cout << -1 << endl;
		else cout << s << endl;
	}
	return 0;
}