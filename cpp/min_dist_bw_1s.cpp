// solved it


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
		bool flag=0;
		int n;
		string s;cin>>n>>s;
		vector<int>v;
		for(int i=0;i<n;i++){
			if(s[i]=='1')v.push_back(i);
		}
		int val=v[v.size()-1];
		for(int i=0;i<v.size();i++){
			if((val-v[i])%2==1){
				flag=1;
				break;
			}
		}
		if(flag)cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}