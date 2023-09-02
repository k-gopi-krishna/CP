#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define int long long
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
using namespace std;
// int solveusing_string(string s,int n){
// 	int res=0;
// 	for(int i=0;i<n;i++){
// 		res+=(s[i]-'0')*(s[i]-'0');
// 	}
// 	return res;
// }
int solve(int n) {
	
		int ans = 0;
		while (n) {
			int temp = n % 10;
			ans += temp*temp;
			n /= 10;
		}
		return ans;
	
}
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int slow = n, fast = n;
	while(true){
		slow=solve(slow);
		fast=solve(solve(fast));
		if(slow==fast)break;
	}
	if(slow==1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
		return 0;
}