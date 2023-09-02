#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
ll int sumx=0,sumy=0,sumz=0;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		sumx+=a;
		sumy+=b;
		sumz+=c;

	}
	if(sumx==sumy and sumy=sumz and sumz==0)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}