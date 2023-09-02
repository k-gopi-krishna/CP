// solved it!!

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
		int n,k,c=0;
		bool flag=0;
		string s;
		cin>>n>>k>>s;
		for(auto i:s){
			if(i=='*')c++;
			else c=0;
			if(c>=k)flag=1;
		}	
		if(flag==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}