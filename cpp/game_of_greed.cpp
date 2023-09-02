#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool make_partition(int *arr,int n,int k,int min_coins){
	int partition=0;int curr_frnd=0;
	for(int i=0;i<n;i++){
		if(curr_frnd+arr[i]>=min_coins){
			partition++;
			curr_frnd=0;
		}
		else curr_frnd+=arr[i];
	}
	return partition>=k;
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[]={10,22,40,50};
	int s=0,e=0;
	int n=sizeof(arr)/sizeof(int);
	int k;cin>>k;
	int ans=-1;
	for(auto i:arr)e+=i;
	while(s<=e){
		int mid=(s+e)/2;
		bool possible=make_partition(arr,n,k,mid);
		if(possible){
			ans=mid;
			s=mid+1;
		}
		else e=mid-1;
	
	}
	cout<<ans<<endl;
	return 0;
}