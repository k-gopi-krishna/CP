// woohoooo solved it!!!


#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
ll int largest(string s,int n){
	ll int c=0;
	ll int maxi=-1;
	for(auto i:s){
		if(i=='1'){
			c++;
			maxi=max(maxi,c);
		}
		else{ c=0;}
	}
	return maxi;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	ll int t;
	cin>>t;
	while(t--){
		ll int x,n,c=0;
		cin>>x>>n;
		string s;
		cin>>s;
		for(char i:s){if(i=='1')c++;
	}
	ll int res=c*x;
	ll int v=largest(s,n)*n+res;
	cout<<v<<endl;
	
	}

	return 0;
}