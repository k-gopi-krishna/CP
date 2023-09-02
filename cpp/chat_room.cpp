#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	string val = "hello";
	int n=s.size();
	int j=0;int ans=0;
	for(int i=0;i<n;i++){
		if(val[j]==s[i]){
			j++;
			ans++;
		}
	}
		if(ans==5)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	return 0;
}