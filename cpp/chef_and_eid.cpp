// done
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
		int n;cin>>n;
		int arr[n];inp;
		sort(arr,arr+n);
		int minv=INT_MAX;
		for(int i=0;i<n-1;i++){
			minv=min(minv,arr[i+1]-arr[i]);
		}
		cout<<minv<<endl;
	}	
	return 0;
}