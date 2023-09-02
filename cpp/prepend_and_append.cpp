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
		string s;cin>>s;
		int an=0;
		for(int i=0;i<n;i++){
			if(s[i]!=s[n-i-1])an++;
			else break;
		}
		int res=n-2*an;
		if(res<0)cout<<0<<endl;	
		else cout<<n-2*an<<endl;
	}
	
	return 0;
}