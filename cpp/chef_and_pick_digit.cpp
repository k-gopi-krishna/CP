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
		string s;cin>>s;
		int n=s.size();
		int res;
		for(int i=0;i<n-1;i++){
			if(s[i]>='0' and s[i+1]>='0'){

			res=int32_t(max(s[i],s[i+1])		);
			}
		}
		cout<<res<<endl;

	}
	return 0;
}