#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b,c;
	cin>>a>>b>>c;
	// here a=l1*b1
	// here b=l1*b2
	// here c=l2*b1
	// a/b=b1/b2
	// a/c =l1/l2
	int x=sqrt(a*b/c);
	int y=sqrt(b*c/a);
	int z=sqrt(c*a/b);
	int res=(x+y+z)*4;
	cout<<res<<endl;

	return 0;
}