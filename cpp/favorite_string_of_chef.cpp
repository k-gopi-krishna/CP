#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool flag = 0;
		int i;
		for (i = 0; i < n - 3; i++) {
			if (s[i] == 'c' and s[i + 1] == 'h' and s[i + 2] == 'e' and s[i + 3] == 'f') {
				break;
			}
		}
		for (int j = 0; j < i - 3; j++) {
						if (s[j] == 'c' and s[j + 1] == 'o' and s[j + 2] == 'd' and s[j + 3] == 'e') {
							flag = 1;
							break;
						}
					}
		if (flag)cout << "AC" << endl;
		else cout << "WA" << endl;
	}
	return 0;
}