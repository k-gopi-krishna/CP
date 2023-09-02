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
	string s1, s2;
	cin >> s1 >> s2;
	bool flag = 0;
	if (s1.size() != s2.size())
		cout << "NO";
	else {
		char x, y;
		int cn = 0;
		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] != s2[i]) {
				cn++;
				if (cn == 1) {
					x = s1[i];
					y = s2[i];
				}
				else if (cn == 2) {
					if (s1[i] == y and s2[i] == x)flag = 1;
				}
				else break;
			}
		}
		if (flag and cn == 2)cout << "YES";
		else cout << "NO";

		return 0;
	}
}