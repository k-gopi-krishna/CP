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
		int n; cin >> n;
		bool a1[n], a2[n];
		int c1 = 0, c2 = 0;
		for (int i = 0; i < n; i++) {
			cin >> a1[i];
			if (a1[i] == 1)c1++;
		}
		for (int i = 0; i < n; i++) {
			cin >> a2[i];
			if (a2[i] == 1)c2++;
		}
		bool flag = 0;
		if (a1[0] != a2[0] or a1[n - 1] != a2[n - 1])
			flag = 1;
		else {
			for (int i = 1; i < n - 1; i++) {
				if (a1[i] == 1 and a2[i] == 0) {
					flag = 1;
					break;
				}
				
				else if(a1[i]==0 and a2[i]==1){
					if(c1>0)flag=0;
					else flag=1;
				}
			}
		}
		// cout<<flag<<" ";
		if (!flag)cout << "YES" << endl;
		else cout << "NO" << endl;


	}

	return 0;
}