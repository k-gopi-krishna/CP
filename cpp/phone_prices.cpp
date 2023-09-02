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
		int n 
		;
		cin>>n;
		int arr[n];
		inp;
		int c=1;
		for(int i=1;i<n-1;i++){
			if(arr[i+1]-arr[i]>40)c++;
		}
		cout<<c<<endl;
	}
	return 0;
}