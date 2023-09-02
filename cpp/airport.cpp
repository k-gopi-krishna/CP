#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int m,n;cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++)cin>>arr[i];
	sort(arr,arr+m);
	int minv=0,k=0,val=arr[0];
	for(int i=0;i<n;i++){
		minv+=val;
		val--;
		if(val==0)val=arr[++k];
	}
	sort(arr,arr+m,greater<int>());
	int maxv=0;

	for(int i=0;i<n;i++){
		maxv+=arr[0];
		arr[0]--;
		for(int i=1;i<m;i++){
			if(arr[i]<=arr[i-1])break;
			else swap(arr[i],arr[i-1]);
		}
	}
	cout<<maxv<<" "<<minv<<endl;

	return 0;
}