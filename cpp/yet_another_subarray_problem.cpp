#include <bits/stdc++.h>
#define int long long
#define ll long long
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
		 ll n;
	    cin>>n;
	    ll j=1;
	    for(ll i=1;i<=n;i++){
	    cout<<j<<" ";
	    j+=2;
	    }
	    cout<<endl;


	}
	return 0;
}