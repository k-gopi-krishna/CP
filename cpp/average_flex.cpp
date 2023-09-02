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
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];inp;
		int ans=0;
		for(int i=0;i<n;i++){
			int c1=0,c2=0;
			for(int j=0;j<n;j++){
				if(arr[j]<=arr[i])c1++;
				if(arr[j]>arr[i])c2++;
			}
			if(c1>c2)ans++;
		}
		cout<<ans<<endl;

	}
	return 0;
}