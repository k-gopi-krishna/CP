#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void permute(string &s,int l,int r){
	if(l==r)cout<<s<<endl;
	else{
		for(int i=l;i<r;i++){
			swap(s[l],s[i]);
			permute(s,l+1,r);
			swap(s[l],s[i]);


		}
	}
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;cin>>s;
	int n=s.size();
	permute(s,0,n);
	return 0;
}