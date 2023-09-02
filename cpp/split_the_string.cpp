// solved it!1


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
		int n;
		cin>>n;
		string s;
		cin>>s;
		int c=0;
		for(int i=0;i<n-1;i++){
			if(s[i]==s[n-1])c++;
		}
		if(c>0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}