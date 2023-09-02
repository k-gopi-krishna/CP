#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int fact(int n ){
	if(n==0)return 1;
	else{
		int b=1;
		for (int i = 2; i <=n; i++)
		{
			b*=i;
		}
		return b;
	}
}int pern(int n,int r){
	 return fact(n) / (fact(r) * fact(n - r));
}
int solve(int x,int n,string s){
	int w=0;
	for (int i = 0; i < 9; i++)
	{
		int a=4*i;
		int b=4*i+1;
		int c=4*i+2;
		int d=4*i+3;
		int e=53-2*i;
		int f=52-2*i;
		int c1=0;
		if(s[a]=='0')c1++;
		if(s[b]=='0')c1++;
		if(s[c]=='0')c1++;
		if(s[d]=='0')c1++;
		if(s[e]=='0')c1++;
		if(s[f]=='0')c1++;
		if(c1>=x)w+=pern(c1,x);

	}
	return w;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int n,x,ans=0;
	cin>>x>>n;
	string s[n];
	for(int i=0;i<n;i++)cin>>s[i];
	for(int i=0;i<n;i++){
		ans+=solve(x,n,s[i]);
	}
	cout<<ans;
	return 0;
}