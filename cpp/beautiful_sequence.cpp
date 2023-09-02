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
		inp(n);
		bool flag = 0;
		// sort(arr,arr+n);
		for (int i = 0; i < n; i++) {
			if (arr[i] == i + 1) {
				flag = 1;
				break;
			}
		}
		if (flag)cout << "YES" << endl;
		else {
			bool f=0;
			for(int i=0;i<n;i++){
				if(arr[i]<i+1){
					f=1;
					break;
				}
			}
			if(f)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;

		}

	}

	return 0;
}