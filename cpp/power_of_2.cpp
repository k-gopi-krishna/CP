#include <bits/stdc++.h>
using namespace std;
void check_2_power(int &n){
	int mask=n-1;
	n&=mask;
}
void check_4_power(int &n){
	int mask=n-1;
	n&=mask;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	check_4_power(n);
	if(n==0)cout<<"yes";
	else cout<<"no";
	return 0;
}