#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
//recursive approach takes exponential time
int cat_num(int n){
	if(n==0 or n==1)return 1;
	
		int ans=0;
		for(int i=1;i<=n;i++){
			int x=cat_num(i-1);
			int y=cat_num(n-i);
			ans+=(x*y);
		}
	return ans;
	
}
//dp approach takes O(n^2) time
//so is better than recursive approach
int cat_num_dp(int n,int dp[]){
	if(n==0 or n==1)return 1;
	if(dp[n]!=0)return dp[n];
	int ans=0;
	for(int i=1;i<=n;i++){
		int x=cat_num_dp(i-1,dp);
		int y=cat_num_dp(n-i,dp);
		ans+=x*y;
	}
	return dp[n]=ans;
}
int cat_num_bottomup(int N){
	vector<int>dp(N+1,0);
	dp[0]=dp[1]=1;
	for(int n=2;n<=N;n++){
		for(int i=1;i<=n;i++){
			dp[n]+=dp[i-1]*dp[n-i];
		}
	}
	return  dp[N];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	/*
	count the no of binary search trees
	fromed using N nodes,numbered from 1 to n
	in->in(1)3,in(2) 4
	op(1)5 op2=14
	*/
	//ans
	/*
	here general formula is
	f(n)=summation(from i=1 to n)f(i-1)*f(n-i)
	and f(0)=f(1)=1;
	*/
	int n;
	cin>>n;
	cout<<cat_num(n)<<endl;
	int dp[n+1]={0};
	cout<<cat_num_dp(n,dp)<<endl;
	cout<<cat_num_bottomup(n)<<endl;
	return 0;
}