#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define endl '\n'
#define inp(n) int arr[n];for(int i=0;i<n;i++)cin>>arr[i]
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";print(x);cerr<<endl;
#else
#define debug(x)
#endif
void print(int a) {cerr << a;}
void print(bool a) {cerr << a;}
void print(string a) {cerr << a;}
void print(double a) {cerr << a;}
void print(char a) {cerr << a;}
template<class T> void print(vector<T>arr) {for (T i : arr) {print(i); cerr << " ";}}
template<class T> void print(set<T>arr) {for (T i : arr) {print(i); cerr << " ";}}
template<class T> void print(unordered_set<T>arr) {for (T i : arr) {print(i); cerr << " ";}}
template<class T, class V> void print(unordered_map<T, V>arr) {cerr << endl; for (auto i : arr) {print(i.first); cerr << " "; print(i.second); cerr << endl; cerr << " ";}}
template<class T, class V> void print(map<T, V>arr) {cerr << endl << "a\tb" << endl; for (auto i : arr) {print(i.first); cerr << "\t"; print(i.second); cerr << endl; cerr << " ";}}
bool invalid(string s, int n, int m) {
	for (int i = 8; i < 8 + m; i++) {
		if (s[i] == '0') {
			return 1;
			// break;
		}

	}
	return false;
}
bool weak(string s, int n, int m) {
	for (int i = 6; i < 6 + m; i++) {
		if (s[i] == '0') {
			return 0;
			// break;
		}

	}
	return 1;
}
void solve() {
	int n, m; cin >> n >> m;

	vector<string>correct, wrong;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		if (s[0] == 'c')correct.pb(s);
		else wrong.pb(s);
	}
	bool flag = 1;
	//if string is correct and atleast one zero is present then it will invalid

	//if string is wrong and atleast one 1 is present then it is weak
	for (int i = 0; i < correct.size(); i++) {
		if (invalid(correct[i], n, m) == 1) {
			cout << "INVALID" << endl;
			flag = 0;
			break;
		}
	}
	if (flag) {
		for (int i = 0; i < wrong.size(); i++) {
			if (weak(wrong[i], n, m) == 1) {
				cout << "WEAK" << endl;
				flag = 0;
				break;
			}
		}
		if (flag)cout << "FINE" << endl;

	}
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}