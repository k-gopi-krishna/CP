#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
vector<int>gcd_ext(int a,int b){
	if(b==0)return {1,0,a};
	vector<int>res=gcd_ext(b,a%b);
	int smallx=res[0];
	int smally=res[1];
	int gcd=res[2];
	int x=smally;
	int y=smallx-(a/b)*smally;
	return {x,y,gcd};
}
vector<int>extendedgcd(int a,int b){
	if(b==0)return {1,0};
	vector<int>result=extendedgcd(b,a%b);
	int smallx=result[0];
	int smally=result[1];
	int x=smally;
	int y=smallx-(a/b)*smally;
	/*
	here we know
	x=y1
	and y=x1-(a/b)*y;
	*/
	return {x,y};
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b;
	cin>>a>>b;
	// in form of ax+by=gcd(a,b)
	
	vector<int>res=gcd_ext(a,b);
	cout<<res[0]<<" "<<res[1]<<" gcd "<<res[2]<<endl;

	return 0;
}