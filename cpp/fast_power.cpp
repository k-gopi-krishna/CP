#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int fastpower(int a,int n){
	if(n==0)return 1;
	int subp=fastpower(a,n/2);
	int subsq=subp*subp;
	if(n&1)return a*subsq;
	else return subsq;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,a;
	cin>>a>>n;
	cout<<fastpower(a,n);

	return 0;
}