#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
		while(t--){
			string s;cin>>s;
			int n=s.size();
			int c=0;
			if(s[0]=='_' or s[n-1]=='_')c++;
			for(int i=0;i<n;i++){
				if(s[i]=='_'){
					if(s[i+1]=='_')++c;
				}
			}	
			cout<<c<<endl;
	}
	
	return 0;
}