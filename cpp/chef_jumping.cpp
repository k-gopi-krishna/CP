#include <bits/stdc++.h>
#define int long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a;cin>>a;
	if(a%3==0 or (a-1)%6==0 )cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}