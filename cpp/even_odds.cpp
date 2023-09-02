#include <bits/stdc++.h>
#define int long long int
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int ans;
	int n,ind;cin>>n>>ind;
	if(n%2==0){
		int mid=(n/2);
		if(ind<=mid){
			cout<<(2*ind)-1;
		}
		else{
			int res=abs(ind-mid);
			cout<<2*res;

		}

	}
	else{
		int mid=1+n/2;
		if(ind<=mid){
			cout<<2*ind-1;
		}
		else{
			cout<<2*(abs(ind-mid));
		}

	}
	return 0;
}