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
	string s1,s2;
	int n=s.size();
	for(int i=0;i<n;i++){
		if(i%2==0)s1+=s[i];
		else s2+=s[i];
	}
	sort(s1.begin(), s1.end());
	int k=0,p=0;
	for(int i=0;i<n;i++){
		if(i%2==0)s[i]=s1[k++];
		else s[i]=s2[p++];
	}
	cout<<s;

	return 0;
}