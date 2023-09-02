#include <bits/stdc++.h>
#define ll long long
#define  n 10000
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
void sol(vector<int>&sieve){
	sieve[0]=sieve[1]=1;
	for(int i=2;i<=n;i++){
		if(!sieve[i])
		{for(int j=i*i;j<=n;j+=i){
					sieve[j]=1;
				}}
	}

}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	vector<int>sieve(n,0);
	sol(sieve);
	for(int i=0;i<100;i++){
		if(!sieve[i]){
			cout<<i<<",";
		}
	}
	return 0;
}