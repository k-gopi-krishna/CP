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
		int m=0,b=0;
		for(auto i:arr){
			if(i&1)b+=i;
			else m+=i;
		}
		if(m>b)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	
	return 0;
}