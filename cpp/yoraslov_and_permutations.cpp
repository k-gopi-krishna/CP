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
	inp(n);
	int con=1,maxc=1;
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			con++;
			maxc=max(maxc,con);
		}
		else
			con=1;

	}
	if(maxc<=(n+1)/2)cout<<"YES";
	else cout<<"NO";
	return 0;
}