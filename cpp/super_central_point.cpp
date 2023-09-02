#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	int x[t],y[t];
	for(int i=0;i<t;i++){
		cin>>x[i]>>y[i];

	}
	int ans=0;
	for(int i=0;i<t;i++){
		bool a1{0},a2{0},a3{0},a4{0};
		for(int j=0;j<t;j++){
			if(x[j]>x[i] and y[i]==y[j])a1=true;
			if(x[j]<x[i] and y[i]==y[j])a2=true;
			if(x[j]==x[i] and y[j]<y[i])a3=true;
			if(x[j]==x[i] and y[j]>y[i])a4=true;


		}
		if(a1 and a2 and a3 and a4)ans++;
	}
	cout<<ans<<endl;

	
	return 0;
}