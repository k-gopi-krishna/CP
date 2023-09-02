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
		for(int i=0;i<n;i++)
			if(arr[i]==1)arr[i]++;
		for(int i=1;i<n;i++){
			if(arr[i]%arr[i-1]==0)arr[i]++;
		}	
		for(auto i:arr)cout<<i<<" ";
			cout<<endl;
	}
	
	return 0;
}