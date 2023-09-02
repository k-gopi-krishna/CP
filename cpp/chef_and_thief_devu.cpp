#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int m,x,y;cin>>m>>x>>y;
		int arr[m];
		for(int i=0;i<m;i++)cin>>arr[i];
	int a[101]={0},c=0;
	for(int i=0;i<m;i++){
		int min=1,max=100;
		if(arr[i]-x*y>0)min=arr[i]-x*y;
		if(arr[i]+x*y<0)max=arr[i]+x*y;
		else max=arr[i]+x*y;
		for(int i=min;i<=max;i++)a[i]=1;
for(int i=min;i<=max;i++)c+=a[i];
	}
cout<<100-c<<endl;
	}	
	return 0;
}