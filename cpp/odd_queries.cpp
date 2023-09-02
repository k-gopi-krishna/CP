#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
// #define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	
		while(t--){
		int n,q;
		cin>>n>>q;
		long long int arr[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}	
		while(q--){
			int l,r;
			long long int k;
			cin>>l>>r>>k;
			int res=sum;
			for(int i=l-1;i<r;i++){
				res=res+abs(k-arr[i]);

			} 
			// res+=sum;
			if(res&1)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	
	return 0;
}