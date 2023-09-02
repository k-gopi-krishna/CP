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
		int n,q;
		string s;
		cin>>n>>q>>s;
	ll int c=0;
	sort(s.begin(),s.end());
	for(int i=0;i<n-1;i++){
			if(s[i]==s[i+1])c++;
			i++;}
	cout<<c<<endl;
	}
	return 0;
}