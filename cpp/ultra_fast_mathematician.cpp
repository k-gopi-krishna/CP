#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s1,s2;cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i])cout<<1;
		else cout<<0;
	}
	return 0;
}