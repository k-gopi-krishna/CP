#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;cin>>n;
	int fib[n+1];
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<=n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout<<fib[n]<<endl;
	return 0;
}