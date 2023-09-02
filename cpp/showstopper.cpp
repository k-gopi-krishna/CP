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
		int a1[n], a2[n];
		int max1 = -1, max2 = -1;
		for (int i = 0; i < n; i++) {
			cin >> a1[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> a2[i];
		}
		for(int i=0;i<n;i++){
			if(a1[i]>a2[i])swap(a1[i],a2[i]);
		}
		int m1=-1,m2=-1;
		for (int i = 0; i < n; i++) {
			m1=max(m1,a1[i]);
			m2=max(m2,a2[i]);
		}
		if(m1==a1[n-1] and m2==a2[n-1])cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		


	}

	return 0;
}