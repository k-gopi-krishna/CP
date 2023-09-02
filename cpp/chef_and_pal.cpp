#include <bits/stdc++.h>
#define ll long long
#define inp for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n % 2 != 0)cout << -1 << endl;
		else {
			string s1(n/2,'1');
			string s2(n/2,'0');
			cout<<s1+s2<<endl;
		}
	}
	return 0;
}