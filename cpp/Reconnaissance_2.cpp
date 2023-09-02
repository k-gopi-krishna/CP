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
	int arr[n + 1];
	int ans=INT_MAX;
	int a1,a2;
	for (int i = 0; i < n; i++)cin >> arr[i];
	arr[n] = arr[0];
	for (int i = 0; i < n; ++i) {
		if(abs(arr[i]-arr[i+1])<ans){
			ans=abs(arr[i]-arr[i+1]);
			a1=i;
		}

	}
		a2=(a1+1)%n;
		cout<<++a1<<" "<<++a2<<endl;
	return 0;
}
