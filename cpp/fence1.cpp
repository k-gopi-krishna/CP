#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <climits>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int ans=INT_MIN;
	int n,k;cin>>n>>k;
	inp(n);
	int sum[n];
	for(int i=0;i<n;i++){
		if(i==0)sum[i]=arr[i];
		else sum[i]+=arr[i]+sum[i-1];
	}
	ans=sum[k-1];
int minind=k-1;
	for(int i=k;i<n;i++){
		// ans=min(ans,sum[i]-sum[i-k]);
		if(ans>(sum[i]-sum[i-k])){
			ans=sum[i]-sum[i-k];
			minind=i-k;
		}
	}
	cout<<minind+1;
	return 0;
}