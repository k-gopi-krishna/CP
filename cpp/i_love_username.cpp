#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	inp;
	int ama = 0;
	int maxv=arr[0];
	int minv=arr[0];
	for(int i=1;i<n;i++){
		if(minv>arr[i] or maxv<arr[i])ama++;
		minv=min(minv,arr[i]);
		maxv=max(maxv,arr[i]);

	}
	cout<<ama<<endl;
	return 0;
}