#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
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
			int n;cin>>n;
		string s;cin>>s;
		unordered_map<char,char>mp;
		for(int i=0;i<n;i++){
			if(i&1){
				mp[s[i]]='0';
			}
			else mp[s[i]]='1';
		}
		bool f=0;
		for(int i=0;i<n;i++)s[i]=mp[s[i]];
		for(int i=0;i<n-1;i++){
			if(s[i]==s[i+1]){
				f=1;
				break;
			}
		}
		if(f)cout<<"NO"<<endl;
		if(!f or n==1)cout<<"YES"<<endl;
// for(auto i:mp)cout<<i.first<<" "<<i.second<<endl;


	}
	
	return 0;
}