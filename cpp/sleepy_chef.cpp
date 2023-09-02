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
		int n,k;
		int c=0,res=0;
		string s;
		cin>>n>>k>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='0'){
				c++;
			}
			if(s[i]=='1' and c<k)c=0;
			if(c==k){c=0;res++;}
		}
		cout<<res<<endl;
	}
	return 0;
}