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
	int n;cin>>n;
	int arr[n];
	int res=0;
	for(int i=0;i<n;i++){cin>>arr[i];res+=arr[i];}
	if(res%n==0)cout<<n<<endl;
	else cout<<n-1;
	return 0;
}