#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int gcd(int a,int b){
	if(b==0)return a;
	else {
		return gcd(b,a%b);
	}
	// time complexity of this function is O(log a)
}
int main(){	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;

	
	return 0;
}