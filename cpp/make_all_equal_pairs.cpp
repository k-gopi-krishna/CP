#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];inp;
		unordered_map<int,int>mp;
		for(auto i:arr)mp[i]++;
			int max=-1;
			for(auto i:mp){
				if(max<i.second)max=i.second;

			}
			int res=n-max;
			cout<<res<<endl;
	}
	return 0;
}