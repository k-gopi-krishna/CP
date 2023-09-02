// done!

#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		ll int n,k;
		cin>>n>>k;
		ll int arr[n];inp;
		if(n==1)cout<<"YES"<<endl;
		else{
			sort(arr,arr+n);
			if(arr[0]+arr[n-1]<=k)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;

		}

	}
	return 0;
}