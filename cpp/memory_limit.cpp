// <--- SOLVED IT!--->
#include <bits/stdc++.h>
#define f  for(int i=0;i<n;i++)cin>>arr[i]
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
		f;
		int s=arr[0];
		for(int i=1;i<n;i++){
			if(arr[i]-arr[i-1]>0){
					s+=arr[i]-arr[i-1];
			}
		}
		cout<<s<<endl;

	}
	return 0;
}