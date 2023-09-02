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
		int n,c=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		for(int i=0;i<n;i++){
			if(arr[i]>=1 and arr[i]<=7){
				c++;
			}
			if(c==7){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}