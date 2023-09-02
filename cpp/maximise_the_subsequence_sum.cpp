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
		int arr[n];inp;
		sort(arr,arr+n);
		ll sum=0;
		for(int i=0;i<n;i++){
			if(i<k and arr[i]<0)arr[i]*=-1;
			if(arr[i]>0)sum+=arr[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}