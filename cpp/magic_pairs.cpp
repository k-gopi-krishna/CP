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
		int n;cin>>n;inp;
		int c=0;
		sort(arr.begin(),arr.end());
		for(int i=1;i<n;i++){
			c=c+(arr[i]-arr[0]);
		}
		cout<<c<<endl;

	}
	return 0;
}