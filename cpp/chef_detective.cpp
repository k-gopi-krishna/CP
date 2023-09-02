// <--- SOLVED IT!-->
#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	
		int n;
		cin>>n;
		int arr[n];
		vector<int>ar(n+1,0);
		for(int i=0;i<n;i++){cin>>arr[i];
			ar[arr[n]]=1;}
		for(int i=0;i<=n;i++){
			if(ar[i]==0)cout<<i<<" ";
	}
	return 0;
}