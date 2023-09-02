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
	int c = 0, zc = 0;
	for (auto i : arr) {
		if (i == 5)c++;
		else zc++;
	}
	if(zc==0)cout<<-1<<endl;
	else if (c % 9 == c)cout << 0 << endl;
	else {
		if (zc >= 1) {
			int res = c % 9;
			sort(arr.begin(), arr.end(), greater<int>());
			for (int i = res; i < n; i++)cout << arr[i];
		}
		else cout << 0 << endl;


	}
	return 0;
}