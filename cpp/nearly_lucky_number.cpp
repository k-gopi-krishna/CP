#include <bits/stdc++.h>
#define int long long
#define inp vector<int> arr(n); for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;cin>>s;
	int c=0;
	for(auto i:s){
		if(i=='4' or i=='7')c++;
	}	
	if(c==4 or c==7)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}