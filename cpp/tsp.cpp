#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i];
int tsp(vector<vector<int>>dist, int setofcities, int city, int n) {
	if (setofcities == (1 << n) - 1)return dist[city][0];
	int ans = INT_MAX;
	for (int choice = 0; choice < n; choice++) {
		if ((setofcities & (1 << choice)) == 0) {
			int subprob = dist[city][choice] + tsp(dist, setofcities | (1 << choice), choice, n);
			ans = min(ans, subprob);
		}
	}
	 return ans;
}

// tsp dp modified version
int tsp_dp(vector<vector<int>>dist, int setofcities, int city, int n,vector<vector<int>>&dp) {
	if (setofcities == (1 << n) - 1)return dist[city][0];
	if(dp[setofcities][city]!=-1){
		return dp[setofcities][city];
	}
	int ans = INT_MAX;
	for (int choice = 0; choice < n; choice++) {
		if ((setofcities & (1 << choice))==0) {
			int subprob = dist[city][choice] + tsp_dp(dist, setofcities | (1 << choice), choice, n,dp);

			ans = min(ans, subprob);
		}
	}
	 dp[setofcities][city]=ans;
	return ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif
	vector<vector<int>> dist = {
		{0, 20, 42, 25}, {20, 0, 30, 34}, {42, 30, 0, 10}, {25, 34, 10, 0}
	};
	int n=4;
	vector<vector<int>>dp(1<<n,vector<int>(n,-1));
	// cout << tsp(dist, 1, 0, n) << endl;
	cout << tsp_dp(dist, 1, 0, n,dp) << endl;
	return 0;
}
