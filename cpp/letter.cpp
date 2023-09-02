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
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	bool flag=1;
	unordered_map<char,int>mp;
	for(char i:s1){
		if(i==' ')continue;
		else mp[i]++;}
	for(char i:s2){
		if(i==' ')continue;
		if(mp[i]>=1){mp[i]--;}
		else {flag=0;break;}
	}
	if(flag)cout<<"YES";
	else cout<<"NO";

	

	return 0;
}