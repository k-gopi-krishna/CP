#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
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
		int n;cin>>n;inp(n);
		map<int,int>mp;
		for(auto i:arr)mp[i]++;
		int maxv=-1;
		for(auto i:mp){
			maxv=max(maxv,i.second);
		}	
		// cout<<maxv<<endl;
		cout<<n-maxv<<endl;
	}
	
	return 0;
}