// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <map>
// #define int long long
// #define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
// using namespace std;
// int solve(int n,vector<vector<int>>&arr,int i,int j,vector<vector<int>>&dp){
// 	if(i==n-1)return arr[i][j];
// 	if(dp[i][j]!=-1)return dp[i][j];
// 	int a=arr[i][j]+solve(n,arr,i+1,j+1,dp);
// 	int b=arr[i][j]+solve(n,arr,i+1,j,dp);
// 	dp[i][j]=max(a,b);
// 	return dp[i][j];
// }
// int32_t main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// 	#endif
// 	int t;cin>>t;
// 		while(t--){
// 		int n;cin>>n;
// 		vector<vector<int>>arr(n+1,vector<int>(n+1));
// 		vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
// 		for(int i=0;i<n;i++){
// 			for(int j=0;j<i+1;j++)cin>>arr[i][j];
// 		}	
// 	cout<<solve(n,arr,0,0,dp)<<endl;
// 	}
	
// 	return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
		while(t--){
		int n;cin>>n;	
		vector<vector<int>>arr(n+1,vector<int>(n+1));
		for(int i=0;i<n;i++){
			for(int j=0;j<i+1;j++)cin>>arr[i][j];
		}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<=i;j++){
			if(arr[i][j]>arr[i][j+1])
				arr[i-1][j]+=arr[i][j];
			else 
				arr[i-1][j]+=arr[i][j+1];
		}
	}
	cout<<arr[0][0]<<endl;
	}
	
	return 0;
}