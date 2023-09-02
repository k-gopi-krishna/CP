#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		ll int ans=1;
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='c' or s[i]=='g' or s[i]=='l' or s[i]=='r')
				ans=(ans*2)%(10000000007);
		}
		cout<<ans<<endl;

	}
	return 0;
}