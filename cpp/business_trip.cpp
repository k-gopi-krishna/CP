#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 12;
	int k; cin >> k; inp;
	int c = 0,sum=0;
	sort(arr.begin(), arr.end(), greater<int>());
	for(int i=0;i<=n-1;i++){
		if(sum>=k)break;
		else {
			sum+=arr[i];
			c++;
		}
	}
	if(sum<k)cout<<-1<<endl;
	else cout<<c<<endl	;



	return 0;
}