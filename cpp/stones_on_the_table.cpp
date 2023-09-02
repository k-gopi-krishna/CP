#include <bits/stdc++.h>
#define int long long
#define inp vector<int> arr(n); for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;cin>>n;
	string s;cin>>s;
	int c=0;
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1])c++;
	}	
	cout<<c<<endl;
	return 0;
}