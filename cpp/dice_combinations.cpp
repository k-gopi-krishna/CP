#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#define mod 10e9+7
// #define int long long int
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int solve(int n) {
	int dp[n+1];
	int v=sizeof(dp);
	memset(dp,-1,sizeof(dp)+1);
	if (n < 0)return 0;
	if (n == 0)return 1;
	if (dp[n] != -1)return dp[n];
	dp[n] = 0;
	for (int i = 1; i < 7; i++) {
		dp[n] += solve(n - i);
	}
	return fmod(dp[n],mod);
}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int res = solve(n);
	cout<<res<<endl;

	return 0;
}