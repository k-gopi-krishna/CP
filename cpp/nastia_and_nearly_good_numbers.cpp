#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		if (b==1)cout << "NO" << endl;
		 else{
		cout<<"YES"<<endl;			cout << a << " " << a*(b) << " " << a*(b+1) << endl;
		}
	}

	return 0;
}