#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
		while(t--){
		int n,a,b;cin>>n>>a>>b;inp(n);
		int bob=0,al=0,c=0;
		for(auto i:arr){
			if(i%a==0 and i%b==0)c++;
			else if(i%a==0)bob++;
			else if(i%b==0)al++;
		}	
	if(c>0)++bob;
	if(bob>al)cout<<"BOB"<<endl;
	else cout<<"ALICE"<<endl;
	}
	
	return 0;
}