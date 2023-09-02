#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,k;
	cin>>n>>k;
	int arr[n];inp;
	int maxv=INT_MIN;
	int minv=INT_MAX;
	for(auto i:arr){
		maxv=max(maxv,i);
		minv=min(minv,i);
	}
	if(k==0){
		for(auto i:arr)cout<<i<<" ";
	}
    if(k>0 and k%2==0){
    	for(int i=0;i<n;i++){
    		arr[i]=arr[i]-minv;
    	}
    	for(int i=0;i<n;i++){
    		cout<<arr[i]<<" ";
    	}
    }
    if(k>0 and k%2!=0){
    		for(int i=0;i<n;i++){
    		arr[i]=maxv-arr[i];
    	}
    	for(int i=0;i<n;i++){
    		cout<<arr[i]<<" ";
    	}

    }


	return 0;
}