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
	int arr[7];
	for(int i=0;i<7;i++)cin>>arr[i];
		int a=0,sum=0;
	while(true){
		sum+=arr[a];
		if(sum>=n){
			cout<<a+1<<endl;
			break;
		}
		a=(a+1)%7;

	}
	// a=(a+1)%7;
	// cout<<a;
	return 0;
}