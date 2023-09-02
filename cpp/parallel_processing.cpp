#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		ll int arr[n];inp;
		ll 	int sum1=0;
		for(auto i:arr)sum1+=i;
		if(n==0)cout<<arr[0]<<endl;
		else{
			ll int sum2=0;
			ll int maxv,minv=sum1;
			for(auto i:arr){
				sum2+=i;
				sum1-=i;
				maxv=max(sum1,sum2);
				minv=min(minv,maxv);

			}
			cout<<minv<<endl;
		}	
	}
	return 0;
}