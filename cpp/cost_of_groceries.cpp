#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, x,flag=0,temp=0;
		cin>>n>>x;
		int a[n], b[n];
		for (int i = 0; i < n; i++)cin >> a[i];
		for (int i = 0; i < n; i++)cin >> b[i];
		for(int i=0;i<n;i++){
			if(a[i]>=x){
			flag=1;
			temp+=b[i];
			}
		}	
		if(flag)cout<<temp<<endl;
		else cout<<0<<endl;
	}
	return 0;
}