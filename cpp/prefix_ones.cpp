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
		int n;string s;cin>>n>>s;
		int fone=0;
		int i;
		for(i=0;i<n;i++){
			if(s[i]=='1'){
				fone++;
			}
			else break;
		}	
		int maxv=0,c=0;
		for(int j=i;j<n;j++){
			c=0;
			while(s[j]=='1'){
				j++;
				c++;
			}
			maxv=max(maxv,c);
		}
		maxv+=fone;
		cout <<maxv<<endl;
	}
	
	return 0;
}