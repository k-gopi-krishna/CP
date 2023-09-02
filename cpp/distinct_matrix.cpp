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
	int t; cin >> t;
	while (t--) {
		int n; cin >>	n;
		if(n<=2)cout<<-1<<endl;
		else{
		vector<vector<int>>arr(n, vector<int>(n, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++)arr[i][j] = 1;
		}
		arr[n-1][n - 1] = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)cout << arr[i][j];
			cout << endl;
		}}

	}

	return 0;
}