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
	string s; cin >> s;
	int cn = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') {
			cn = i;
			break;
		}
	}

	for (int i = 0; i < s.size(); i++) {
		if (i == cn)continue;
		else cout << s[i];
	}

	return 0;
}