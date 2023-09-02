#include <bits/stdc++.h>
using namespace std;
int convert_to_binary(int a){
	int res=0;
	int p=1;
	while(a>0){
		int last_bit=a&1;
		res+=p*last_bit;
		p*=10;
		a=a>>1;
	}
	cout<<res;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a;
	cin>>a;
	convert_to_binary(a);
	
	return 0;
}