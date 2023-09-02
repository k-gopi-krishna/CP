#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	if (t == 1) {
		string s; cin >> s;
		cout << s << endl;
	}
	else {
		unordered_map<string, int>mp;
		while (t--) {
			string s; cin >> s;
			mp[s]++;
		}
		int ans=INT_MIN;
		for(auto i:mp)ans=max(ans,i.second);
		for(auto i:mp){
			if(ans==i.second){
				cout<<i.first<<endl;
				break;
			}
		}

	}
	return 0;
}