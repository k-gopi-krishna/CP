#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int solve(int n){
	int ans=(-1+sqrt(8*n+1))/2;
	return ans;
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ans=solve(n);
		cout<<ans<<endl;
	}	
	return 0;
}