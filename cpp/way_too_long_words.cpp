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
		string s;cin>>s;
		int n=s.size();
		string res=to_string(n-2);
		if(n<=10)cout<<s<<endl;
		else{
			string ans;
			ans+=s[0];
			int i;
				for(i=1;i<=(res.size());i++){
				ans+=res[i-1];
			}
			ans+=s[n-1];
		cout<<ans<<endl;
		}	
	}
	
	return 0;
}