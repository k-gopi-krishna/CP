#include <bits/stdc++.h>
#define int long long
#define inp vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool isprime(int n){
	int c=0;
	if(n==0 or n==1)return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){return 0;}
	}
	// if(c>0)return 0;
	return 1;
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int m,n,temp;
	cin>>m>>n;
	for(int i=m+1;;i++){
		if(isprime(i)){
			temp=i;
			break;
		}
	}
	if(temp==n)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}