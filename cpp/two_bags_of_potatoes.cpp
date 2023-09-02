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
	int y,k,n;
	cin>>y>>k>>n;
	if(y==n)cout<<-1<<endl;
	else{
		int maxi=n/y;
		int res=2;
		cout<<res<<" ";
		for(int i=0;i<maxi;i++){
			res+=k;
			cout<<res<<" ";

		}
	}
	return 0;
}