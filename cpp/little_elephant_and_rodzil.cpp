#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;cin>>n;inp;
	int minv=INT_MAX;
	int ans,c=0;
	for(int i=0;i<n;i++){
		if(arr[i]<minv){
			minv=arr[i];
			c=1;
			ans=i+1;
		}
		else if(arr[i]==minv)c++;
	}
	if(c==1)cout<<ans;
	else cout<<"Still Rozdil\n";
	return 0;
}