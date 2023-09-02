#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;cin>>n;
	for(int i=0;i<=n;i++){

		for(int j=i;j<=n;j++)cout<<j<<" ";
			cout<<endl;
	}
	return 0;
}