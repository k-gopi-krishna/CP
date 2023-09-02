#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
vector<vector<int>> binomial_coff(int n, int k) {
	vector<vector<int>>table(n + 1, vector<int>((k + 1), 0));
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= min(i, k); j++) {
			if (j == 0 or i == j)table[i][j] = 1;
			else {
				table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
			}
		}
	} return table;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int q=5;
	vector<vector<int>>table=binomial_coff(n,n);
	while(q--){
		int k;
		cin>>k;
		if(k<=n)cout<<table[n][k]<<endl;

	}
	return 0;
}