// <--- SOLVED IT!!--->
#include <bits/stdc++.h>
#define l endl;
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
		int minv=n+1;
		for(int i=0;i<n;i++){
			minv=min(minv,arr[i]);
		}
		for(int i=0;i<n;i++){
			if(minv==arr[i]){cout<<i+1<<l;break;}
		}
	}
	return 0;
}