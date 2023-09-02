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
void solve() {
	int a, b; cin >> a >> b;
	if (a == 1 or b == 1)cout << -1 << endl;
	else if (a%2==1 and b%2==1)cout << -1 << endl;
	else if (a % 2 == 0) {
		string s1(a / 2, 'a');
		cout << s1 + string(b, 'b') + s1 << endl;
		cout << "b" + s1 + string(b - 2, 'b') + s1 + "b" << endl;

	}
	else if (b % 2 == 0) {
		string s1(b / 2, 'b');
		cout << s1 + string(a, 'a') + s1 << endl;
		cout << "a" + s1 + string(a - 2, 'a') + s1 + "a" << endl;

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