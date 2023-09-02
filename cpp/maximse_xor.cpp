// solved it!11!!!!!!!


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
		string a,b;
		cin>>a>>b;
		string res="";
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int>());
		for (int i = 0; i < a.size(); ++i)
		{
			res+=to_string(int(a[i])^int(b[i]));
		}
		sort(res.begin(),res.end(),greater<int>());
		cout<<res<<endl;
	}
	return 0;
}