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
	while (t--)
	{
		string s;
		cin >> s;
		int ec = 0; int oc = 0;
		for (int i = 0; i < s.size(); i++) {
			if ((i % 2 == 0 and s[i] == '-') or (i % 2 != 0 and s[i] == '+') )ec++;
			if ((i % 2 == 0 and s[i] == '+') or (i % 2 != 0 and s[i] == '-') )oc++;


		}
		cout << min(ec, oc) << endl;
	}
	return 0;
}