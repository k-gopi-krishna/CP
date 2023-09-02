#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b,c;
	cin>>a>>b>>c;
	int ans=a*b*c;
	ans=max(ans,(a+b)*c);
	ans=max(ans,a*(b+c));
	ans=max(ans,a+b+c);
	cout<<ans;
	return 0;
}