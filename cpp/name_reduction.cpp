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
	int t; cin >> t;

	while (t--) {
		string a, b; cin >> a >> b;
		a += b;
		map<char, int>mp;
		for (auto i : a)mp[i]++;
		bool flag = 1;
		int j;
		cin >> j;
		map<char, int>m;
		while (j--)
		{
			string s; cin >> s;
			for (auto i : s)m[i]++;
		}
		for (auto i : m) {
			if (mp[i.first] < i.second)flag = 0;
		}
		if (flag)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}