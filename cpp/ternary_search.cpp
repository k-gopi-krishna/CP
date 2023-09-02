#include <iostream>
// #define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int ternary_search(int arr[],int l,int h,int key){
	int mid1=l+(h-l)/3;
	int mid2=h-(h-l)/3;
	if(arr[mid1]==key)return mid1+1;
	if(arr[mid2]==key)return mid2+1;
	if(arr[mid1]>key)return ternary_search(arr,l,mid1-1,key);
	else if(key>arr[mid2])return ternary_search(arr,mid2+1,h,key);
	else return ternary_search(arr,mid1+1,mid2-1,key);
	return -1;

}
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[]={1,2,3,4,5,6,7,8,8,9};
	int n=arr.siz(e);
	cout<<ternary_search(arr,0,arr.size(),3);
	
	return 0;
}