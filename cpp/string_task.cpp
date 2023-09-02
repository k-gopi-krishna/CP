#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;cin>>s;
	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]>='A' and s[i]<='Z'){
			s[i]=32+s[i];
		}
	}
	string res="";
	for(int i=0;i<n;i++){
		if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='u' or s[i]=='y' or s[i]=='i'){
			continue;
		}
		else{ res+=".";res+=s[i];}
	}
	cout<<res<<endl;
	return 0;
}