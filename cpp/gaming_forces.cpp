#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		inp;
		int c = 0;
		if (n % 2 == 0) {
			for (int i = 0; i < n - 1; i++) {
				if (arr[i] <= 0 and arr[i + 1] <= 0)continue;
				else {
					c++;
					arr[i]--;
					arr[i + 1]--;

				}
			}
		}
		else {
			for (int i = 0; i < n; i++)
			{
				if(arr[i]<=0)continue;
				else{
					c++;
					arr[i]--;
				}


			}
		}
		cout<<c<<endl;
	}

	return 0;
}