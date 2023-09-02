#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define pb push_back
#define int long long
#define endl '\n'
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
		while(t--){
		string a,b;cin>>a>>b;
		int n=a.size();
		int m=b.size();
		int b=__gcd(n,m);	
		
	}
	
	return 0;
}