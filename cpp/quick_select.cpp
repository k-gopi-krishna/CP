#include <bits/stdc++.h>
// #define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int partition(int *arr,int low,int high){
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<high;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);

	return i+1;
}
int quickselect(int *arr,int low,int high,int k){
	int p=partition(arr,low,high);
	if(p==k)return arr[k];
	else if(k<p)return quickselect(arr,low,p-1,k);
	else return quickselect(arr,p+1,high,k);
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[]={10,5,2,0,7,6,4};
	int n=sizeof(arr)/sizeof(int);
	int k;
	cin>>k;
	cout<<quickselect(arr,0,n-1,k-1);
	return 0;
}