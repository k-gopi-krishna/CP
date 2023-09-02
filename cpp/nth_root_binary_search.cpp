#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
double eps = 1e-6;
//accurate upto 6 digits
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	double x;cin>>x;
	double lo=1,hi=x,mid;
	while(hi-lo>eps){
		mid=(lo+hi)/2;
		if(mid*mid<x){
			lo=mid;
		}
		else hi=mid;

	}
	cout<<setprecision(5)<<lo<<" "<<hi<<endl;

	return 0;
}