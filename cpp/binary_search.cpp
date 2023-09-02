#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int bs(int arr[],int n,int key){
	int f=0;
	int mid;
	int l=n-1;
	while(f<=l){
		mid=(f+l)/2;
		if(arr[mid]==key)cout<< mid;
		else if(arr[mid]<key){
			f=mid+1;
		}
		else l=mid-1;
	}
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[]={1,2,3,4,5,6};
	bs(arr,6,4);
	return 0;
}