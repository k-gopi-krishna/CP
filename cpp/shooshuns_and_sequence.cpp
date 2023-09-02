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
	int n,k;cin>>n>>k;
	inp(n);
	for(int i=k;i<n;i++){
		//checking at right indices
		if(arr[i]!=arr[k-1]){
			cout<<-1;
			return 0;
		}
	}
	//checking at left indices
	for(int i=k-2;i>=0;--i){
		if(arr[i]!=arr[k-1]){
			cout<<i+1;
			return 0;
		}
	}
	cout<<0;

	return 0;
}