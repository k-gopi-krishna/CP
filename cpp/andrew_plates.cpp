#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		ll int n,m,c=0,c1=0;
		cin>>n>>m;
		ll int arr[n];inp;
		sort(arr,arr+n,greater<int>());
		for(int i=0;i<n;i++){
			c+=arr[i];
			c1++;
			if(c>=m)break;
		}
		if(c<m)cout<<-1<<endl;
		else cout<<c1<<endl;
	}
	return 0;
}