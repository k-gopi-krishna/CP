#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;cin>>s;
	string s1;cin>>s1;
	int n=s.size();
	string res="";
	for(int i=0;i<n;i++)res+=s[n-i-1];
	if(res.compare(s1)==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
	return 0;
}