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
		int x,y;
		cin>>x>>y;
		if(x-(2*y)>=0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}