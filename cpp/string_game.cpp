#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#define pb push_back
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t; cin >> t;
	while (t--) {
		int n; string s;
		cin >> n >> s;
		int cnt = 0;
		stack<char>st;
		for (auto i : s) {
			if (st.empty()) {

				st.push(i);
			}
			else if (st.top() == i) {
				st.push(i);
			}
			else {
				st.pop();
				cnt++;
			}
		}
		if (cnt & 1)cout << "Zlatan" << endl;
		else cout << "Ramos" << endl;

	}	
	return 0;
}