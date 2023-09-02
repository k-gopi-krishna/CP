#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool fullkp(ll int arr[],int n,int num){
	bool f=0;
	ll int res=1;
	for(int i=0;i<n;i++)res*=arr[i];
	if(res%num==0)f=1;
return f;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		ll int n,k;
		cin>>n>>k;
		ll int arr[n];
		inp;
		if(fullkp(arr,n,k))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	return 0;
}