#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define pb push_back
#define int long long
#define endl '\n'
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tt; cin >> tt;
	while (tt--) {
		int n,x,t;cin>>n>>x>>t;
		int a=t/x;
		a=min(n,a);
		// int sum=a*(a-1)/2;
		int ans=n*a-a*(a+1)/2;
		cout<<ans<<endl;
	}

	return 0;
}