#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n, a, b; cin >> n >> a >> b;
		string s;cin>>s;
		int ans=0;
		ans+=a*n;
		if(b>0)ans+=n*b;
		else{
			int c=0;
			for(int i=1;i<n;i++){
				if(s[i]!=s[i-1])c++;
			}
			++c;
			ans+=((c/2+1))*b;
		}
		cout<<ans<<endl;
	}

	return 0;
}