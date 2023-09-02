#include <bits/stdc++.h>
using namespace std;
void clear_bits_in_range(int &n,int i,int j){
	int a=~0<<(j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	n&=mask;
}
void replace_bits(int &n,int i,int j,int m){
	clear_bits_in_range(n,i,j);
	int mask=m<<i;
	n|=mask;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a=15;
	replace_bits(a,1,3,2);
	cout<<a;
	
	return 0;
}