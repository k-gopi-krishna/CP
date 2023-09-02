#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
vector<int>extended_gcd(int a,int b){
	if(b==0)return {1,0,a};
	vector<int>res=extended_gcd(b,a%b);
	int smallx=res[0];
	int smally=res[1];
	int gcd=res[2];
	int x=smally;
	int y=smallx-(a/b)*smally;
	return {x,y,gcd};

}
int mmi(int a,int m){
	vector<int>res=extended_gcd(a,m);
	int x=res[0];
	int gcd=res[2];
	if(gcd!=1)cout<<"Multiplicative modulo doesn't exists";
	int ans=(x%m+m)%m;
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,m;
	cin>>a>>m;
	cout<<mmi(a,m);

	return 0;
}