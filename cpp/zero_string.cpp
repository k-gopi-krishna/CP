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
		int n;string s;
		cin>>n>>s;
		int c=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1')c++;
		}	
		if(c==n)cout<<1<<endl;
		else if(c==0)cout<<0<<endl;
		else if(c>n/2) {
		    cout<<n-c+1<<endl;
			
		}
		else{
		    cout<<c<<endl;
		}

	}
	
	return 0;
}