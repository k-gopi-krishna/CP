#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
bool ispower(int n){
	int y=sqrt(n);
	return n==y*y;
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t; 
		while(t--){
		int n;cin>>n;
		if((n%2==0  and ispower(n/2)==1))cout<<"YES"<<endl;
		else if( (n%4==0 and ispower(n/4)==1))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}