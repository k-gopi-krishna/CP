#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n;cin>>n;
		string s;cin>>s;
		if(s.compare("1")==0 or s.compare("10")==0)cout<<"NO"<<endl;
		else{
			int cn=0;
			for(auto i:s){
			if(i=='1')cn++;}
			if(cn<=3)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		
		

		}
	}



	return 0;
}