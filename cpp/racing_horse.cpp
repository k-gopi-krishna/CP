#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		inp;
		int mini=INT_MAX;
		sort(arr.begin(),arr.end());
		for(int i=0;i<n-1;i++){
			mini=min(mini,arr[i+1]-arr[i]);
		}
		cout<<mini<<endl;
	}
	return 0;
}