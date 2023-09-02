#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_J	UDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
		while(t--){
		int n;cin>>n;inp(n);
		sort(arr,arr+n);
		int res=arr[0];
		for(int i=0;i<n-1;i++){
			res=max(res,arr[i+1]-arr[i]);


		}	
		cout<<res<<endl;
	}
	
	return 0;
}