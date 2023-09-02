#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		int c=1,minv=n+1,maxv=-1;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]-arr[i]>2){
				minv=min(minv,c);
				maxv=max(maxv,c);
				c=1;
		}
		else c++;
	}
	cout<<min(minv,c)<<" "<<max(maxv,c)<<endl;
	}
	return 0;
}