// solved it!

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
		int n;string s;
		cin>>n>>s;
		int c=0;
		for(int i=0;i<s.size();i++){
			if(s[i]!=s[i+1])c++;
		}
		cout<<c<<endl;
	}
	return 0;
}