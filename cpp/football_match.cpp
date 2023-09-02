// done

#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string arr[n]; inp;
		sort(arr,arr+n);
		string s;int c=0;
		for(int i=0;i<n;i++){
			s=arr[0];
			if(arr[i]==s)c++;
		}
		if(n-c==c)cout<<"Draw"<<endl;
		else if(c>n-c)cout<<arr[c]<<endl;
		else if(c<n-c)cout<<arr[n-1]<<endl;

	}
	return 0;
}	