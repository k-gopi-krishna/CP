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
		int c=0;
		while(n!=50){
			if(n>50){
				n-=3;
				++c;
			}
			else {
				n+=2;
				++c;
			}
		}	
		cout<<c<<endl;
	}
	
	return 0;
}