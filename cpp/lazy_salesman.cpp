#include <bits/stdc++.h>
#define int long long
#define inp vector<int> arr(n); for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int n,w;cin>>n>>w;
		inp;
		int sum=0;
		int ans=0;
		sort(arr.begin(),arr.end());
		for(int i=n-1;i>=0;i--)
		{
			if(sum>=w)ans++;
			else sum=sum+arr[i];

		}
		cout<<ans<<endl;
	}	
	return 0;
}