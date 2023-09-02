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
	int t;
	cin >> t;
	while (t--) {
		ll int a, b;
		cin >> a >> b;
		if(a==1 or b==1)cout<<1<<endl;
		else if(a==2*b or b==2*a)cout<<min(a,b)<<endl;
		else {
			while(a!=b){
				if(a<b)b-=a;
				else a-=b;
			}
			cout<<b<<endl;
		}
		
	}
	return 0;
}