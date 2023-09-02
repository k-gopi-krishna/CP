#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a;
	cin>>a;
	if(a&1==1)cout<<"odd"<<endl;
	else cout<<"even"<<endl;
	return 0;
}