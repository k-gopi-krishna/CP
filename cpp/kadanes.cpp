#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <climits>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n; inp(n);
	int ans = 0;
	int startind=0,finalind=0;
	int maxv = INT_MIN;
	for (int i = 0; i < n; i++) {
		if(ans==0)finalind=0;
		ans += arr[i];
		if (ans > maxv) {
			maxv = ans;
			finalind=i;
		}
		// maxv=max(maxv,ans);
		if (ans < 0) {
			ans = 0;
			finalind=0;
			startind++;
		}
	}
	cout << max(maxv, ans) << endl;
	// cout<<finalind<<" "<<startind<<endl;
	for(int i=startind;i<=finalind;i++)cout<<arr[i]<<" ";
	return 0;
}


