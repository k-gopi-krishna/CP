#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n];inp;
		sort(arr,arr+n);
		cout<<arr[(n+k)/2]<<endl;
	}
	return 0;
}