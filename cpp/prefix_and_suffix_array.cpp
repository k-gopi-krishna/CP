#include <iostream>
#include <algorithm>
#include <vector>
// #include <bits/stdc++.h>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string res;
		vector<string>s;
		int t = 0;
		for (int i = 0; i < 2 * n - 2; i++) {
			cin >> res;
			if (res.size() == n - 1)s.push_back(res);
		}
		reverse(s[0].begin(),s[0].end());
		if(s[0].compare(s[1])==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}

	return 0;
}