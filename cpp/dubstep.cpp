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
	int n=s.size();
	bool flag=1;
	string ans;
	for(int i=0;i<n;i++){
		if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
			i+=2;
			cout<<" ";

		}
		else{
			flag=0;
			cout<<s[i];
		}
	}
	return 0;
}