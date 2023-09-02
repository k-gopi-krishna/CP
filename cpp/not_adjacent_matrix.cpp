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
		if (n==2)cout << -1 << endl;
		else if (n == 1)cout << 1 << endl;
		else {
			vector<int>arr(n*n+1);
			int val=0;
			for(int i=1;i<(n*n)+1;i++){
				if(i&1)arr[val++]=i;
			}
			for(int i=1;i<n*n+1;i++){
				if(!(i&1))arr[val++]=i;
			}
			for(int i=0;i<n*n;i++){
				if(i>0 and i%n==0)cout<<endl;
				cout<<arr[i]<<" ";
			}



		}
	}

	return 0;
}