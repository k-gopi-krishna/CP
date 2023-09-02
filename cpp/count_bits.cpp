#include <bits/stdc++.h>
using namespace std;
int count(int a){
	int c=0;
	while(a>0){
		c+=(a&1);
		a=a>>1;
	}
	cout<<c;
}
int count_mod(int a){
	int c=0;
	int n=a;
	while(a>0){
		a=a&(a-1);
		c++;
	}
	cout<<c;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a;
	cin>>a;
	count_mod(a);
	return 0;
}