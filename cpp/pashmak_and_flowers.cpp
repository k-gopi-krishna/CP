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
	int n;cin>>n;inp(n);
	sort(arr,arr+n);
	int ans=arr[n-1]-arr[0];
	int c1=0,c2=0;
	for(int i=0;i<n;i++){
		if(arr[i]==arr[0])c1++;
		else break;
	}
	for(int i=n-1;i>=0;--i){
		if(arr[i]==arr[n-1])c2++;
		else break;
	}
	if(arr[0]==arr[n-1])cout<<0<<" "<<(n-1)*n/2<<endl;
	else{
		cout<<ans<<" "<<c1*c2<<endl;
	}

	return 0;
}