#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
// #define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
	vector<vector<int>>dp(12,vector<int>(12,-1));

int solve(vector<vector<int>>&arr,int i,int j,int n){

	if(i>=n or j>=n)return INT_MAX;
	if(dp[i][j]!=-1)return dp[i][j];
	if(i==n-1 and j==n-1)return arr[i][j];
	return dp[i][j]=arr[i][j]+min(solve(arr,i+1,j,n),solve(arr,i,j+1,n));
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;cin>>n;
	vector<vector<int>>arr(n,vector<int>(n));
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>arr[i][j];
		cout<<solve(arr,0,0,n);


	return 0;
}