#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s[n];
		bool flag=0;
		int sc=0,vc=0;
		for(int i=0;i<n;i++)cin>>s[i];
		for(int i=0;i<n;i++){
			int len=s[i].size();
			if(len>=3 and s[i].substr(len-3,3)=="man")sc++;
				else vc++;
			if(sc-vc>=2){
				flag=1;
				cout<<"superheroes"<<endl;
				break;
			}
			if(vc-sc>2){
				cout<<"villians"<<endl;
				flag=true;
				break;
			}

		}
		if(!flag)cout<<"draw"<<endl;
	}
	return 0;
}