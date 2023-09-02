#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
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
		int minv=INT_MAX;
		for(auto i:arr)minv=min(minv,i);
			int c=0;
		for(int i=0;i<n;i++){
			if(c==n/2)break;
			if(arr[i]!=minv){cout<<arr[i]<<" "<<minv<<endl;++c;}
		}	
	}
	
	return 0;
}