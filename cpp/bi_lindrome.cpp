#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
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
		int n;cin>> n;
		string s;cin>>s;
		unordered_set<char>st;
		for(auto i:s)st.insert(i);
			int res=n-st.size();
		if(st.size()==n)cout<<-1<<endl;
		else cout<<n-2*res<<endl;

	}
	
	
	return 0;
}