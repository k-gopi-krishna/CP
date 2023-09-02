#include <bits/stdc++.h>
using namespace std;
bool getbit(int a,int pos){
	int mask=1<<pos;
	return mask&a;
} 	
int clear_ith_bit(int &i,int pos){
	int mask=~(1<<pos);
	i=i&mask;
	// cout<<i;
}
int set_ith_bit(int n,int pos){
	int mask=1<<pos;
	n|=mask;
	cout<<n;
}
int update_ith_bbit(int n,int pos,int v){
	clear_ith_bit(n,pos);
	int mask=v<<pos;
	n|=mask;
	cout<<n;
}
int clear_last_ibits(int &n,int i){
	int mask=(-1<<i);
	n=n&mask;
}
void clear_bits_in_range(int &n,int i,int j){
	int a=~0<<(j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	n&=mask;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a=31;
	// // cin>>a;
	// int pos=2;
	// // cin>>pos;
	// clear_last_ibits(a,pos);
	clear_bits_in_range(a,1,3);
	cout<<a;
	return 0;
}