// SOLVED IT!!

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
		int n;cin>>n;
		int arr[n];
		inp;
		int sum=0;
		int m=arr[0];
		for (int i = 0; i < n; i++)
		{
			if(arr[i]<m){m=arr[i];}
			sum+=arr[i];
		}
		cout<<sum-n*m<<endl;
	}

	return 0;
}