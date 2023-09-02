#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
		while(t--){
		double n,k;cin>>n>>k;
		int res=ceil(n/k);
		k=k*res;
		int ans=ceil(k/n);
		cout<<ans<<endl;


	}
	
	return 0;
}