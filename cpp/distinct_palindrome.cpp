// solved it!!

#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		char s[n];
		bool flag = 0;
		if ((n % 2 == 0 and x > n / 2) or (n % 2 != 0 and x - 1 > n / 2))flag = 1;
		else {
			for (int i = 0; i < x; i++) {
				s[i] = char(97 + i);
				s[n - i - 1] = s[i];
				if (n % 2 != 0)s[n / 2] = s[i];
			}
			for (int i = x; i < n / 2; i++) {
				s[i] = char(97);
				s[n - i - 1] = s[i];


			}
		}
		if (flag)cout << -1 << endl;
		else {
			for (int i = 0; i < n; i++) {cout << s[i];} cout << endl;
		}
	}
	return 0;
}