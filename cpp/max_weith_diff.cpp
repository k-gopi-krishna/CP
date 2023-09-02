// solved it!

#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		inp;
		sort(arr,arr+n);
		int cs=0;
		int c=0;
		int item=min(n-k,k);
		for(int i=0;i<item;i++)c+=arr[i];
		for(int i=item;i<n;i++)cs+=arr[i];
			cout<<cs-c<<endl;
	}
	return 0;
}