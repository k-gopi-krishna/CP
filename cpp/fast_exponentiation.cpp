#include <bits/stdc++.h>
#define ll long long
#define m 1234567
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b;
	int ans=1;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;

	while(b){
		if(b&1)(ans*=a)%m;
		// a*=a;
		a=(a*1ll*a)%m;
		b>>=1;

	}
	cout<<ans<<endl;
	//time complexity --> O(log(b))

	return 0;
}