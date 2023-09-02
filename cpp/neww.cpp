#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
#define n 100
void prime(vector<int>&sieve){
	sieve[0]=0;
	sieve[1]=0;
	for(int i=2;i<=n;i++){
		if(sieve[i]==1){
			for(int j=i*i;j<=n;j=j+i){
				sieve[j]=0;
			}
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	vector<int>a(n,1);
	prime(a);
	for(int i=0;i<80;i++){
		if(a[i])cout<<i<<",";
	}
	return 0;
}