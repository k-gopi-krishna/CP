#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,m;cin>>n>>m;
	inp;
	sort(arr.begin(), arr.end());
	int ans=0;
	for(int i=0;i<m;i++){
		if(arr[i]<=0)
		ans+=(arr[i]);
	else break;
	}
	cout<<abs(ans)<<endl;
	return 0;
}