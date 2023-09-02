#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n,x1,y1,x2,y2;
		cin>>n>>x1>>y1>>x2>>y2;
		int val=min(x1,y1);
		int c=0;
		// val=0;
		c=min(x1,y1);

    	int val1=min(n-x2,n-y2);
    	c+=val1;
    	cout<<c<<endl;
	}
	return 0;
}