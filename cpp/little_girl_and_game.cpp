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
	string s;cin>>s;
	map<char,int>mp;
	for(auto i:s)mp[i]++;
	int oc=0;
	for(auto i:mp){
		if((i.second)&1)oc++;
	}
	if(oc==0 or (oc&1==1))cout<<"First"<<endl;
	else cout<<"Second"<<endl;
	return 0;
}