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
		int n,k;cin>>n>>k;
		int arr[n];inp;
		int res=arr[0];
		for(int i=1;i<n;i++)res|=arr[i];
		res=k-res;
	int ans=res&k;
	if(ans==res){
		cout<<res<<endl;
	}
	else cout<<-1<<endl;
	}
	return 0;
}