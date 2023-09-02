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
		int n;cin>>n;
		if(n&1)cout<<-1<<endl;
		else if(n==2)cout<<"2 1"<<endl;
		else{
			cout<<1<<" "<<2<<" ";
			for(int i=3;i<n+1;i++){
				if(i&1)cout<<i+1<<" ";
				else cout<<i-1<<" ";
			}
			cout<<endl;
		}	
	}
	
	return 0;
}