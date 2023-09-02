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
	int n; cin >> n;
	inp(n);
	// sort(arr, arr + n);
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	for (int i = 0; i < n; i++ ) {
		if (arr[i] == 4)c4++;
		if (arr[i] == 1)c1++;
		if (arr[i] == 2)c2++;
		if (arr[i] == 3)c3++;
	}
	int res = 0;
	if (c1 == c3) {
		res += (c1 + c3) / 2;
	}
	else if(c1<c3 or c3<c1){
		res+=(c1+c3)/2;
		res+=abs(c1-c3);
	}
	if (c2 %4==0) {
		res += (c2-c2/4);
	}
	else if(c2%4!=0){
		res+=(c2/4);
		res+=abs(c2/4);
	}
	cout<<res;
	

	return 0;
}