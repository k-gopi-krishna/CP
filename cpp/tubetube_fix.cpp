#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
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
		int n,q;cin>>n>>q;
		vector<int>a(n),b(n);
		for(int i=0;i<n;i++)cin>>a[i];	
		for(int i=0;i<n;i++)cin>>b[i];	
		int ans=INT_MIN,maxv=INT_MIN;
		for(int i=0;i<n;i++){
			if(a[i]<=q){
				if(b[i]>maxv){
					maxv=b[i];ans=i;
				
				}
			}
		}
		cout<<ans+1<<endl;
	}
	
	return 0;
}