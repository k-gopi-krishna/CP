#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int c=0;
	for(int i=1;i<=d;i++){
		if(i%k==0 or i%l==0 or i%m==0 or i%n==0)c++;

	}
	cout<<c<<endl;
	return 0;
}