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
	inp;
	int minv=arr[0];
	int maxv=arr[0];
	int minp,maxp;
	for(int i=0;i<n;i++){
		minv=min(arr[i],minv);
		maxv=max(arr[i],maxv);
	}
	for(int i=0;i<n;i++){
		if(arr[i]==minv){
			minp=i;
			// break;
		}
	}
	for(int i=0;i<n;i++){
			if(arr[i]==maxv){
			maxp=i;
			// break;
		}
	}
	 cout << maxp + (n - 1 - minp) - (minp < maxp ? 1 : 0) << endl;
	return 0;
}