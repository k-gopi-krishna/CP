#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int fact(int n){
	int b=1;
	for(int i=1;i<=n;i++)b*=i;
		return b;
}
int solve(int i,int j,int r,int c){
	if(i==r-1 and j==c-1)return 1;
	if(j>=c or i>=r)return 0;
	int ans=solve(i+1,j,r,c)+solve(i,j+1,r,c);
	return ans;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int r,c;
	cin>>r>>c;
	// cout<<solve(0,0,r,c)<<endl;
	/*here recursion  takes 2^(m+n)time
	but we can solve it in constant time
	here we move the right for r-1 times 
	and down for c-1 times
	therefore we can solve using formula
	(m-1+n-1)!/(m-1)!(n-1)!;
	*/
	int res=(fact(r-1+c-1))/(fact(r-1)*fact(c-1));
	cout<<res<<endl;

	return 0;
}