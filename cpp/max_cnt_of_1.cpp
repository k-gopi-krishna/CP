// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <map>
// #define int long long
// #define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
// using namespace std;
// int32_t main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// 	int t; cin >> t;
// 	while (t--) {
// 		int n; string s;
// 		cin >> n >> s;
// 		vector<char>x0(n), x1(n);
// 		x0[0] = '0';
// 		x1[0] = '1';
// 		int c0 = 0, c1 = 1;

// 		for (int i = 1; i < n; i++) {
// 			int a = (x1[i - 1] - '0') ;
// 			int b = (s[i - 1] - '0');
// 			int res = a ^ b ;
// 			x1[i] = res + '0';
// 			if (x1[i] == '1')c1++;
// 		}


// 		for (int i = 1; i < n; i++) {
// 			int a = (x0[i - 1] - '0') ;
// 			int b = (s[i - 1] - '0');
// 			int res = a ^ b ;
// 			x0[i] = res + '0';
// 			if (x0[i] == '1')c0++;
// 		}

// 		cout << max(c0, c1) << endl;



// 	}

// 	return 0;
// }

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
		int n; string s;
		cin >> n >> s;
		vector<char>v;
		v.push_back('1');
		for (int i = 0; i < n - 1; i++) {
			if (v.at(i) == s[i])v.push_back('0');
			else v.push_back('1');
		}
		int c = 0;
		for (auto i : v) {
			if (i == '1')c++;
		}
		if (c > n / 2)cout << c << endl;
		else cout << n - c << endl;

	}

	return 0;
}