#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int n;cin>>n;inp;
		sort(arr.begin(),arr.end());
		for(int i=0;i<n;i++){
		int c=0;
			for(int j=i;j<n;j++){
				if(arr[i]<arr[j])c++;
			}
			cout<<c<<" ";
		}
		cout<<endl;
	}
	return 0;
}