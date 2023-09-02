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
	int n,q;
	cin>>n>>q;
	unordered_map<int,int>mp;
	while(q--){
		string s;cin>>s;
		int a,b;cin>>a>>b;
		mp[a]+=b;
	}
	int maxv=INT_MIN;
	for(auto i:mp){
		if(i.second>maxv)maxv=i.second;
	}
	cout<<maxv<<endl;
	return 0;
}