#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int c1=0;
		for(char i:s){
			if(i=='1')c1++;
		}
		ll int res=((c1)*(c1+1))/2;
		cout<<res<<endl;
	}
	return 0;
}