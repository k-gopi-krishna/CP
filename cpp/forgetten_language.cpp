//solved it

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
		int n, k;
		cin >> n >> k;
		string s[n];
		for (int i = 0; i < n; i++)cin >> s[i];
		unordered_map<string, int>m;
		for (int i = 0; i < k; i++) {
			int l;
			cin >> l;
			for (int j =0; j < l; j += 1) {
				string str;
				cin >> str;
				m[str]++;
			}
		}
		for(int i=0;i<n;i++){
			if(m[s[i]])cout<<"YES ";
			else cout<<"NO ";
		}
		cout<<endl;
	}
	return 0;
}