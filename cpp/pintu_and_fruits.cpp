// solved it!1s

#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool compare(std::pair<std::string , int> i, pair<std::string, int> j) {
	return i.second < j.second;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int arr[n];
		int arr1[n];
		inp;
		for (int i = 0; i < n; i++)cin >> arr1[i];
		unordered_map<int, int>m1;
		for (int i = 0; i < n; i++) {
			m1[arr[i]] += arr1[i];
		}
		unordered_map<int, int>::iterator it;
		int res = 999999;
		for (it = m1.begin(); it != m1.end(); it++) {
			res = min(res, it->second);
			// cout<<it->second<<endl;

		}
		cout<<res<<endl;



	}
	return 0;
}