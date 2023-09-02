#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;cin>>s;
	int uc=0,lc=0;
	int n=s.size();
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'  and s[i]<='z')lc++;
		else uc++;
	}	
	if(lc<uc){
		for(int i=0;i<n;i++)
		s[i]=toupper(s[i]);
	}
	else 
		for(int i=0;i<n;i++)s[i]=tolower(s[i]);
	cout<<s<<endl;
	return 0;
}